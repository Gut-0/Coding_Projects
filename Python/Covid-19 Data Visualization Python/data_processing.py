import requests
import pandas as pd
from dotenv import load_dotenv
import os

load_dotenv()
API_KEY = os.getenv("API_KEY")


def fetch_covid_data():
    url = "https://covid-193.p.rapidapi.com/statistics"
    headers = {
        "X-RapidAPI-Key": API_KEY,
        "X-RapidAPI-Host": "covid-193.p.rapidapi.com"
    }
    try:
        response = requests.get(url, headers=headers)
        response.raise_for_status()
        data = response.json()
        return data['response']
    except requests.exceptions.RequestException as e:
        print(f"Error: {e}")
        return None


def process_data(data):
    records = []
    for country_data in data:
        country = country_data['country']
        if country != 'all':
            total_deaths = country_data['deaths']['total']
            if total_deaths is not None and 100000 <= total_deaths <= 1000000:
                total_cases = country_data['cases']['total']
                total_tests = country_data['tests']['total']
                records.append({'Country': country, 'TotalCases': total_cases, 'TotalDeaths': total_deaths,
                                'TotalTests': total_tests})
    df = pd.DataFrame(records)
    return df


def main():
    covid_data = fetch_covid_data()
    if covid_data:
        df = process_data(covid_data)
        df.to_csv('covid_data.csv', index=False)


if __name__ == "__main__":
    main()
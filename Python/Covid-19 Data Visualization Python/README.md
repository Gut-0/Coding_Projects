# COVID-19 Data Processing and Visualization
#### Pandas & Plotly 
<p>
    <img src="https://img.shields.io/static/v1?label=&message=Python&color=yellow&style=for-the-badge&logo=Python"/>
    <img src="https://img.shields.io/static/v1?label=&message=RapidAPI&color=blue&style=for-the-badge&logo="/>
    <img src="http://img.shields.io/static/v1?label=STATUS&message=completed&color=success&style=for-the-badge&logo"/>
    <img src="http://img.shields.io/static/v1?label=IDEA&message=INTELLIJ&color=bi=success&style=for-the-badge&logo="/>
</p>

## Index

* [Overview](#Overview)
* [Prerequisites](#Prerequisites)
* [Instructions to Run the Program](#Instructions-to-Run-the-Program)
* [Reference](#Reference)
* [Example Usage](#Example-Usage)
* [Jupyter Notebook](#Jupyter Notebook)

## Overview
<p style="text-align: justify">
  The COVID-19 Data Visualization project is aimed at fetching COVID-19 statistics from a public API, processing the data, and creating interactive visualizations for better understanding and analysis. The project is implemented using Python, Plotly, Pandas, Requests and Dotenv. Please, be aware that the project purpose is just to explore the libraries and better understanding python.
</p>


## Prerequisites

* Python 3.x
* Required libraries: requests, pandas, plotly


## Instructions to Run the Program

<p style="text-align: justify">
Step 1: Obtain a Free RapidAPI key by signing up at RapidAPI.

Step 2: Create a .env file in the project root directory with your RapidAPI key:
</p>

````
API_KEY= your_rapidapi_key
````
Step 3: Install the requirements.
````bash
pip install -r requirements.txt
````
Step 4: Run the data processing script to fetch and process COVID-19 data.
```` bash
python data_processing.py
````
Step 5: Run the script to generate visualizations.
```` bash
python create_visualizations.py
````
Step 6: It will open in a web browser to display the previews.

## Reference

### data_processing.py

This script fetches COVID-19 statistics from the RapidAPI using the provided API key, processes the data, and stores it in a CSV file.

* Functions: 

````bash
fetch_covid_data()
```` 
Fetches COVID-19 data from the RapidAPI.
````bash
process_data(data)
```` 
Processes the fetched data to create a Pandas DataFrame.

&nbsp;

### create_visualizations.py

This script generates interactive visualizations using Plotly based on the processed data.


* Functions:

````bash
create_bar_chart(df)
```` 
Creates a bar chart visualization of COVID-19 total cases by country.

````bash
create_pie_chart(df)
```` 
Creates a pie chart visualization of COVID-19 total deaths by country.
````bash
create_line_chart(df) 
```` 
 Creates a line chart visualization of COVID-19 total testes did by country.
```` bash
create_map_chart(df)
```` 
Creates a map visualization of COVID-19 total deaths by country.

## Jupyter Notebook

I have created a jupyter notebook to explore the libs in more details. Then you will need to install more packages like Matplotlib, IPython and so on.
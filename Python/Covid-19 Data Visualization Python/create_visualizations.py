import pandas as pd
import plotly.express as px


def create_bar_chart(df):
    fig_bar = px.bar(df, x='Country', y='TotalCases', title='COVID-19 Total Cases by Country', template='plotly_dark')
    fig_bar.update_layout(hovermode="x unified")

    return fig_bar


def create_pie_chart(df):
    fig_pie = px.pie(df, names='Country', values='TotalDeaths',
                     title='COVID-19 Total Deaths by Country',
                     template='plotly_dark')
    return fig_pie


def create_line_chart(df):
    fig_line = px.line(df, x='Country', y='TotalTests',
                       title='COVID-19 Total Tests by Country',
                       template='plotly_dark')
    return fig_line


def create_map_chart(df):
    fig_map = px.scatter_geo(df, locations='Country', locationmode='country names', size='TotalDeaths',
                             title='COVID-19 Total Deaths by Country', template='plotly_dark')
    return fig_map


def main():
    df = pd.read_csv('covid_data.csv')

    bar_chart = create_bar_chart(df)
    bar_chart.show()

    pie_chart = create_pie_chart(df)
    pie_chart.show()

    map_chart = create_map_chart(df)
    map_chart.show()

    line_chart = create_line_chart(df)
    line_chart.show()


if __name__ == "__main__":
    main()

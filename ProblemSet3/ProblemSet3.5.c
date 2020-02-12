#include <stdio.h>

int main()
{
    int day = 12;
    int month = 2;
    int year = 2020;
    int precipitation = 0;
    float hiTemp = 43;
    float loTemp = 34;
    printf("\t\tWeather on %i/%i/%i; \n\t\tHigh: %0.1f˚F, Low: %0.1f˚F\n\t\tChances of rain: %i%%", month, day, year, hiTemp, loTemp, precipitation);
}
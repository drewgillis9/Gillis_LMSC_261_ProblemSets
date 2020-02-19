#include <stdio.h>

int main()
{
    int day = 19;
    int month = 2;
    int year = 2020;
    int precipitation = 0;
    float hiTemp = 42;
    float loTemp = 22;
    printf("\t\tWeather on %i/%i/%i; \n\t\tHigh: %0.0001f˚C, Low: %0.0001f˚C\n\t\tChances of rain: %i%%", month, day, year, (hiTemp-32) * 5/9, (loTemp-32) * 5/9, precipitation);
}
#include <stdio.h>
int main(){
    int year,days_per_year,total_days;
    year = 2;
    days_per_year = 365;
    total_days=days_per_year*year;
    printf("YEARS= %d\nDAYS_PER_YEAR= %d\nTOTAL_DAYS= %d\n",year,days_per_year,total_days);/*%d он показывает куда вставить*/
    /*переменную, который мы указываем в опр порядке*/
    return 0;
}
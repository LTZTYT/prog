#include <stdio.h>
#define DaysInYear 365 /*При подстановке букв которые мы тут указали система выдаст опр значение*/
#define HoursInDay 24
#define SecundInHour 3600
int main(){
    int y=18,days,hours,secundy;
    days=DaysInYear*y;
    hours=days*HoursInDay;
    secundy=hours*SecundInHour;
    printf("Секунды: %d | Часы: %d | Дни: %d | Годы: %d",secundy,hours,days,y);
    return 0;
}
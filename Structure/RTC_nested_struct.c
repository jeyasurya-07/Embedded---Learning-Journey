#include <stdio.h>

typedef struct{
    int day,month,year;
}date_t;

typedef struct{
    date_t date;
    int hour,minutes;
}rtc_t;
rtc_t RTC;

int main ()
{
    rtc_t *ptr = &RTC;
    printf("enter the date (day month year):");
    scanf("%d %d %d",&ptr->date.day,&ptr->date.month,&ptr->date.year);
    printf("enter the time (hour minutes):");
    scanf("%d %d",&ptr->hour,&ptr->minutes);

    printf("%d/%d/%d",ptr->date.day,ptr->date.month,ptr->date.year);
    printf(" %d:%d",ptr->hour,ptr->minutes);

}
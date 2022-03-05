#include <stdio.h>
int main (){


int day;
int year;
int week;

// user will input dates
printf("Enter days: ");
scanf("%d",&day);

//convert dates in to years and weeks

year=day/365;
week=(day%365)/7;
day=day-((year*365)+(week*7));

//print result
printf("Years :%d\n", year);
printf("weeks :%d \n" ,week);
printf("days :%d\n",day);





return 0;
}

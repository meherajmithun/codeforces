#include<stdio.h>
int main(){
    int a,months,days,years;
    scanf("%d",&a);
    years=a/365;
    months=(a%365)/30;
    days=(a%365)%30;
    printf("%d years\n%d months\n%d days",years,months,days);
    return 0;


}

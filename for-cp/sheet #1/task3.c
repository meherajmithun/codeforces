#include<stdio.h>
int main(){
    long long X,Y,sum,multiplication,subtraction;
    scanf("%lld%lld",&X,&Y);
    sum=X+Y;
    multiplication=X*Y;
    subtraction=X-Y;
    printf("%lld + %lld = %lld\n",X,Y,sum);
    printf("%lld * %lld = %lld\n",X,Y,multiplication);
    printf("%lld - %lld = %lld\n",X,Y,subtraction);
    return 0;
}


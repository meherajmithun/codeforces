#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,e;
    scanf("%lf %lf",&a,&b);
    c=floor(a/b);
    d=ceil(a/b);
    e=round(a/b);
    printf("floor = %.lf / %.lf = %.lf\n",a,b,c);
    printf("ceil = %.lf / %.lf = %.lf\n",a,b,d);
    printf("round = %.lf / %.lf = %.lf\n",a,b,e);
    return 0;
}

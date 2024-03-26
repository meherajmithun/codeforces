#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    e=pow(a,b);
    f=pow(c,d);

    if(e>f)
    {
      printf("YES\n");
    }
    else{
     printf("NO");
    }
    return 0;
}

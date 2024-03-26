#include<stdio.h>
int main(){
    int a;
    float n,b;
    scanf("%f",&n);
    a=n;
    b=n-a;
    if(b<=0){
     printf("int %d",a);
    }
    else {
     printf("float %d %.3f",a,b);
    }
}

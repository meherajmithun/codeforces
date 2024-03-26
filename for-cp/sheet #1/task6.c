#include<stdio.h>
int main(){
    long long N,M;
    int a,b,sum;
    scanf("%lld%lld",&N,&M);
    a=N%10;
    b=M%10;
    sum=a+b;
    printf("%d\n",sum);
    return 0;
 }

 /*#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    int a = N % 10;
    int b = M % 10;

    int sum = a + b;

    printf("%d\n", sum);

    return 0;
}*/

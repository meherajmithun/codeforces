#include<stdio.h>
#include<conio.h>

int main(){
    long long a,b,result;
    char c;
    scanf("%lld%c%lld",&a,&c,&b);
    switch(c){
     case '+':
      result=a+b;
      break;
     case '-':
      result=a-b;
      break;
     case '*':
      result =a*b;
      break;
     case '/':
      result =a/b;
      break;
    }
    printf("%lld",result);

    getch();
}

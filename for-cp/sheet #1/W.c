#include<stdio.h>
int main(){
    int a,b,c;
    char d,e;
    scanf("%d %c %d %c %d",&a,&d,&b,&e,&c);

    if(d=='+'){
     if(a+b==c){
      printf("YES");
     }
     else {
      printf("%d",a+b);
     }
    }
    else if(d=='-'){
     if(a-b==c){
      printf("YES");
      }
      else{
       printf("%d",a-b);
       }
    }
    else {
     if(a*b==c){
      printf("YES");
     }
     else {
      printf("%d",a*b);
     }
     }
     return 0;
}

#include<stdio.h>
int main(){
    int a,b,c;
    int lowest,middle,highest;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c){

     lowest = a;

     if(b<c){

      middle = b;
      highest = c;
     }
     else{
      middle=c;
      highest=b;
     }
    }
    else if(b<c && b<a){
     lowest = b;
     if(a<c){

      middle = a;
      highest = c;
     }
     else {
      middle = c;
      highest =a;
     }
    }

    else {
      lowest = c;
      if(a<b){
       middle = a;
       highest = b;

      }

      else {
       middle = b;
       highest = a;

      }
    }
    printf("%d\n%d\n%d\n\n",lowest,middle,highest);

    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}

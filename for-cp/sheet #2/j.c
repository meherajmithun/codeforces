#include<stdio.h>
int main(){
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
     c=1;
     for(j=2;j<i;j++){
      if(i%j==0){
       c=2;
      }
     }
     if(c==1){
      printf("%d ",i);
     }
    }
}

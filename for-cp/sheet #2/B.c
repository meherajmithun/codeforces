#include<stdio.h>
int main(){

    int i=1,n;
    scanf("%d",&n);

    if(i<n){

    for(i=1;i<=n;i++){
     if(i%2==0){
      printf("%d\n",i);
     }
    }
    }
    else {
     printf("-1");
     }
    return 0;
}

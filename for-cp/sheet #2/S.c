#include<stdio.h>
int main(){
    int n,i,j,a,b,sum=0;
    scanf("%d",&n);
    for(i = 0 ; i < n; i++){
     sum=0;
        scanf("%d %d",&a,&b);
        if(a>b){
            for(i = b+1 ;i < a ; i++){
                if(i % 2 !=0){

                    sum=sum+i;
                }
            }
            printf("%d\n",sum);
        }
        else{
            for(i = a+1 ; i < b; i++){
                if(i % 2 !=0){

                    sum=sum+i;

                }
            }
         printf("%d\n",sum);
        }
    }

}

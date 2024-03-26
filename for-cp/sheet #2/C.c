#include<stdio.h>
int main(){
    int m,i,a,n=0,p=0,e=0,o=0;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a);
        if(a%2==0){
            e++;
            if(a>0){
                p++;
            }
            else if(a<0){
                n++;
            }
        }
        else if(a%2!=0){
            o++;
            if(a>0){
                p++;
            }
            else if(a<0){
                n++;
            }
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}

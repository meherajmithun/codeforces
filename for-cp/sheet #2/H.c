#include<stdio.h>
int main(){
    int n,count=0,i;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0 && n !=1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}

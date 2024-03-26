#include<stdio.h>
int main(){
    long long n,a[100],i,s;
    scanf("%lldd",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
    while(a[i] !=0){
     s=a[i]%10;
     a[i]=a[i]/10;
	 printf("%lld ",s);
     }
     printf("\n");
     }
	 return 0;
    }



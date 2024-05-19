#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%d ",strlen(a));
    printf("%d\n",strlen(b));
    printf("%s %s",a,b);
    return 0;
}
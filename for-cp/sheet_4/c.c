#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    int x = strlen(a);
    int y = strlen(b);
    if(x<=y){
        printf("%s",a);
    }
    else if (y<=x){
        printf("%s",b);
    }
}
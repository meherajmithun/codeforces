#include<stdio.h>
#include<string.h>

int main(){
    char a[1000],b[1000];
    scanf("%s",&a);
    scanf("%s",&b);
    int x,i,y;
    x = strlen(a);
    y = strlen(b);
    printf("%d %d\n",x,y);
    
    strcat(a,b);
    int z = strlen(a);
    printf("%s\n",a);
    printf("%c",a[z-2]);
    for(i=1;i<x;i++){
        printf("%c",a[i]);
    }
    printf(" %c",a[0]);
    printf("%c",a[z-1]);

}
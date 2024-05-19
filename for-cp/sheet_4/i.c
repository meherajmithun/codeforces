#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100],c[100];
    scanf("%s",&a);
    strcpy(c,a);
    int i=0,j=0,len=0;
    while(a[i] != '\0'){
        i++;
        len++;
    }
    for(j = 0,i = len-1; i >= 0; i--,j++){
        b[j] = a[i];
    }
    int x = strcmp(c,b);
    if(x == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}
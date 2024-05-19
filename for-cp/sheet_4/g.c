#include<stdio.h>
int main(){
    char a[10000];
    fgets(a, 10000, stdin);
    int i = 0;
    while(a[i] != '\0'){
        if(a[i] >= 'a' && a[i] <= 'z'){
            printf("%c", a[i]-32);
        }
        else if( a[i] >= 'A' && a[i] <= 'Z'){
            printf("%c", a[i]+32);
        }
        else if(a[i] == ','){
            printf(" ");
        }
        i++;
    }
    printf("\n");
}
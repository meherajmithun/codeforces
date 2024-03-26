#include<stdio.h>
int main(){
    int x,y;
    float n,m,o;
    scanf("%d %d",&x,&y);

    m=100-x;
    o=y/m;
    n=o*100;
    printf("%.2f",n);
    return 0;
}

#include<stdio.h>
int main(void){
    char x;
    scanf("%c",&x);
     if(x>='0' && x<='9'){
     printf("IS DIGIT\n");
     }
   else if((x>='a' && x<='z')||(x>='A' && x<='Z')){
     printf("ALPHA\n");
     if (x>='a' && x<='z'){
     printf("IS SMALL\n");
     }
     else if(x>='A' && x<='Z'){
     printf("IS CAPITAL\n");
     }
     }
     return 0;

}

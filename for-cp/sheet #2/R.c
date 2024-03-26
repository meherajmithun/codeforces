#include<stdio.h>
int main(){

	int a,b,i,sum=0;

	while(1){

	 scanf("%d %d",&a,&b);

	 if ((a>0) && (b>0)){

	 if(a>b){
	 sum=0;
	  for(i=b;i<=a;i++){
	   printf("%d ",i);
	   sum = sum +i;
	  }
	  printf("sum =%d\n",sum);
	 }
	 else if(b>a){
	 sum=0;
	  for(i=a;i<=b;i++){
	   printf("%d ",i);
	   sum=sum+i;
	  }
	  printf("sum =%d\n",sum);
	}
   }
   else {
       break ;
   }
}
return 0;
}

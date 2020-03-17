#include<stdio.h>
int main(){
	int prom,n=0,num=0,sum=0;
	while(num>=0){
	num=0;
	printf("Ingrese número: ");
	scanf("%d",&num);
	if(num>=0){
		sum=sum + num;
		n+=1;
	}else{
		prom=sum/n;
	}
	system("cls");
	}
printf("El promedio es %d\n",prom);
return 0;		
}

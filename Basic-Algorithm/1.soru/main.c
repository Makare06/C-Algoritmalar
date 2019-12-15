#include <stdlib.h>   
#include <time.h>    
#include <conio.h>
#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
int max,min,n,i,b,fark,j;
int rastgele; 
	printf("max degeri giriniz:");
	scanf("%d",&max);
	printf("min degeri giriniz:");
	scanf("%d",&min);
	printf("bir sayi degeri giriniz:");
	scanf("%d",&n);
	

    int dizi[n];
    fark=max-min;
    bool a=true;
	srand(time(NULL));
    	for(j=0;j<n;j++)
		if(n>fark){
			 	rastgele=min+rand()%(max-min);
			 	dizi[j]=rastgele;
			printf("%d\n",dizi[j]);	 	
		}
	
	else{
	
		
	for(i=0;i<n;i++){
   
   a=true;
   while(a){
   	rastgele=min+rand()%(max-min);
   	
   	if(i==0)
   	{
   		dizi[i]=rastgele;
   		break;
	}
	
	   a=false;
	   for(j=0;j<i;j++)
	   {
	   	if(dizi[j]==rastgele)
	   	{
	   		a=true;
		   }
		   
	   }
	   
	   if(a==false){
	   	dizi[i]=rastgele;
	   	break;
	   }
	   
   }
}

   for(i=0;i<n;i++){
   	printf("%d\n",dizi[i]);
   	
   }

	return 0;
	

}}

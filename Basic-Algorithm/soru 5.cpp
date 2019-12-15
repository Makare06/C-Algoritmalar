#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>

int main(int argc, char *argv[]) {
	int n,i;
	printf("n degerini giriniz :");
	scanf("%d",&n);
    
    int	dizi[n];
    
	for(i=0;i<n;i++)
	{
		
	printf("%d. elemani giriniz: ",i+1);
	scanf("%d",&dizi[i]);
    }
       int enb=dizi[0];
    for(i=1; i<n; i++){
        if(enb<dizi[i]){
            enb=dizi[i];
        }
    }
        int enk=dizi[0];
    for(i=0; i<n; i++){
        if(dizi[i]<enk){
            enk=dizi[i];
        }
    }

    int r=enb-enk;
    printf("Dizinin R degeri = %d \n",r);
    
    double k;
    do{

           }while(n<0);


           k=sqrt(n);
           int a=ceil(k);
           printf("Dizinin K degeri = %d \n ",a);
    int h=r/k;
	int b=ceil(k);
	       printf("Dizinin H degeri = %d \n",b); 

    for(i=0;i<k;i++){
    	
    	dizi[i]=enk;
    	enk=enk+(h+1);
    	
    	printf("Dizinin Alt sinif limitleri: %d \n",dizi[i]);
	}
	for(i=0;i<k;i++){
    	
    	dizi[i]=enb;
    	enb=enb+(h+1);
    	
    	printf("Dizinin ust sinif limitleri: %d \n",dizi[i]);
	}





		        
}

#include <stdlib.h>   
#include <stdio.h>

int main(int argc, char *argv[]) {
int max,min,i;
int rastgele;
int a,b; 
	printf("max degeri giriniz:");
	scanf("%d",&max);
	printf("min degeri giriniz:");
	scanf("%d",&min);
	int k = (max/min);
	if(max%min==0){
	 printf(" K degeri : %d , Random sayi: ",k);     
		
	for(i=0;i<k;i++){
    
       rastgele=1+rand()%(k-1);
     	
	 }
	 for(b=0;b<min;b++){

	    printf( "%d \n",rastgele);
	    rastgele+=k;
	 }
		 
		 
	}
    else{
    	
    	 printf(" K degeri : %d , Random sayi: ",k+1);
    	 
    	      for(i=0;i<k;i++){
     	
     	rastgele=1+rand()%(k-1);
     	
	 }
	 for(b=0;b<min;b++){
	 	
	 	printf( "%d \n",rastgele);
	 	rastgele+=k+1;
	 }
	}

    getchar();
    return 0 ;
}

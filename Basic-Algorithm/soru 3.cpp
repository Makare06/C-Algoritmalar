#include <stdio.h>
#include <stdlib.h>

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
	for(i=0;i<n;i++){
		
		for(int j =i+1; j<n;j++){
			
			if(dizi[i]>dizi[j]){
				
				int gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
				
			}
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("%d \n",dizi[i]);
	}
	
	getchar();
	return 0;
}

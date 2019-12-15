#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int n,i;
	float hort;
	float frequency = 0;
	float medyan;
	float gort;
	printf("n degerini giriniz :");
	scanf("%d",&n);
    float	dizi[n];
    float toplam=0;
	int d=n/2;
	for(i=0;i<n;i++)
	{
		
	printf("%d. elemani giriniz: ",i+1);
	scanf("%f",&dizi[i]);
	}
	for(i=0;i<n;i++){
		
        toplam +=dizi[i];
	}
	printf(" Toplam = %.2f \n",toplam);	
	float sonuc=toplam/n;
	printf("Aritmetik Ortalama = %.2f \n ",sonuc);
		for(i=0;i<n;i++){
		
        hort +=1/dizi[i];
	}

	float harmonik=n/hort;
	printf ("Harmonik ortalama = %.2f \n",harmonik);
 
    if(n%2==0){
    	
    	medyan=dizi[d]+dizi[d-1];
    	medyan=medyan/2;
    	printf("Medyan = %.2f \n",medyan);
	}
	else{
		
		medyan=dizi[d];
		printf("Medyan= %.2f \n",medyan);
	}




	getchar();
	return 0;
}

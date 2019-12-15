
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int i,a,j;
	printf("eleman sayisini giriniz :");
	scanf("%d",&a);
	int sayilar[a];
	for(i=0;i<a;i++){
		printf("%d. elemaný giriniz : ",i+1);
		scanf("%d", &sayilar[i]);
	}
		for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(sayilar[i]>sayilar[j]){
				int gecici=sayilar[i];
				sayilar[i]=sayilar[j];
				sayilar[j]=gecici;
			}
		}
	}
	
	int tekrarsiz[a];
	int tekrarsizsira = 0;
	int sayac;
	for(sayac = 0; sayac < a; sayac++)
	{
		int siradakisayi = sayilar[sayac];
		int basla;
		int atla = 0;
		for(basla = 0; basla < a; basla++)
		{
			if(tekrarsiz[basla] == siradakisayi)
			{
				atla = 1;
				break;
			}
		}
		if(atla == 1)
			continue;
		else
		{
			tekrarsiz[tekrarsizsira] = siradakisayi;
			tekrarsizsira++;
			int kactanevar = 0;
			int basla2;
			for(basla2  = 0; basla2 < a; basla2++)
			{
				if(siradakisayi == sayilar[basla2])
					kactanevar++;
			}
	
			printf("%d sayisindan %d tane var\n", siradakisayi, kactanevar);
		}
	}
	return 0;
}

 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n,r;
    printf("n :");
    scanf("%d",&n);
    printf("r :");
    scanf("%d",&r);
     double t =1 ;
    for (int i=1;i<=n;i++)
   {
	t *= i;
}
   double tut = n-r;
    double tutt=1;
    for(int  i=1;i<=tut;i++)
{
	tutt*=i;
 }
     printf("Permutasyon : %.0f",t/(tutt));
	
}


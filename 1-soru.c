#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i,size=10;
	float toplam=0,standartsapma,aro=0,dizi[10],varyans[10];
	printf("---------------Standart sapma hesaplayaci--------------\n\n");
	for(i=0;i<size;i++){
		printf("Dizin %d. elamanini giriniz:",i+1);
		scanf("%f",&dizi[i]);
		aro+=dizi[i];
	}
	aro=aro/size;
	for(i=0;i<size;i++){
		varyans[i]=dizi[i]-aro;
       varyans[i]*=varyans[i];
		toplam+=varyans[i];
	}
	toplam=toplam/(size-1);
	standartsapma=sqrt(toplam);
	printf("Aritmetik ortalama=%f\n",aro);
	printf("Varyans=%f\n",toplam);
	printf("Standart sapma=%f",standartsapma);
	printf("\nProgram sonlandi.");
	return 0;
}

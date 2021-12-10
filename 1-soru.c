#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i;
	float toplam=0,standartsapma,aro=0,dizi[10],varyans[10];
	for(i=0;i<10;i++){
		printf("Dizin %d. elamanini giriniz:",i+1);
		scanf("%f",&dizi[i]);
		aro+=dizi[i];
	}
	aro=aro/10;
	for(i=0;i<10;i++){
		varyans[i]=dizi[i]-aro;
       varyans[i]*=varyans[i];
		toplam+=varyans[i];
	}
	toplam=toplam/9;
	standartsapma=sqrt(toplam);
	printf("Aritmetik ortalama=%f\n",aro);
	printf("Varyans=%f\n",toplam);
	printf("Standart sapma=%f",standartsapma);
	return 0;
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main(){
	int size,i,j;
	printf("kac elamanli dizi istiyorsaniz giriniz:");
	scanf("%d",&size);
	int dizi[size];
	    srand(time(NULL));
	    printf("Dizinin normal siralanisi:\n\n");
	for(i=0;i<size;i++){
		dizi[i]=rand()%10;
		printf("%d ",dizi[i]);}
	for(i=0;i<size;i++){
	  if(dizi[i]==dizi[i+1]){
	  for(j=i;j<size;j++){
		dizi[j]=dizi[j+1];	}
	     size--;	} }
	    printf("\n\nDizinin tekrarsiz siralanmasi:\n\n");
		for(i=0;i<size;i++){
		printf("%d ",dizi[i]);
	}
	return 0;
}

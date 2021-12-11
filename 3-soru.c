#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
  const int size=50;
  int dizi[size];
  int i,j,temp;
  srand(time(NULL));
  printf("Rasgele siralama:\n\n");
  for(i=0;i<size;i++){
  	        dizi[i]=rand()%20;
         	printf("%d ",dizi[i]);}
  for(i=0;i<size;i++){
  	for(j=i+1;j<size;j++){
  		if(dizi[i]>dizi[j]){
  			temp=dizi[i];
  			dizi[i]=dizi[j];
  			dizi[j]=temp;}}}
  	        printf("\n\nSelection sort-secmeli siralama yontemi ile siralama:\n\n");
  for(i=0;i<size;i++){
  	       printf("%d ",dizi[i]);}
           printf("\n\nBubble sort kabarcik siralama yontemi ile siralama:\n\n");
  for(i=0;i<size;i++){
  		if(dizi[i]>dizi[j]){
  			dizi[i]=dizi[i+1];
  			dizi[i]=temp;
  			dizi[i]=dizi[j];
  			dizi[j]=temp;}}
  for(i=0;i<size;i++){
            printf("%d ",dizi[i]);}
  }
  


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int zar[100][2],toplam[6]={0};
	int i,j,c;
	srand(time(NULL));
	for(i=0;i<100;i++){
		for(j=0;j<2;j++){
			zar[i][j]=rand()%6 +1;
			for(c=0;c<6;c++){
			if(zar[i][j]==c+1)
			toplam[c]+=1;	}}}
	for(i=0;i<100;i++){	
		for(j=0;j<2;j++){
			if(zar[i][0]==zar[i][1]){
				printf("%d .atisda zarlar birbirine esittir degeri:%d\n",i+1,zar[i][1]);	
				break;	}
				printf("%d. atis %d. zar:%d\n",i+1,j+1,zar[i][j]);	}
	   }
		for(c=0;c<6;c++){
		printf("toplam %d tane %d. vardir.\n",toplam[c],c+1);}
	return 0;
}

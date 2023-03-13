#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
   int A[2][2]={8,4,6,2};
   int B[2][2]={4,6,2,7};
   int C[2][2]={0,0,0,0};
   int D[2][2]={1,8,5,9};
   int i,k,j;
   for(i=0;i<2;i++){
   	for(k=0;k<2;k++){
   		for(j=0;j<2;j++){
   			C[i][k]+=A[i][j]*B[j][k];
   			printf("C[%d][%d]= %d",i,k,C[i][k]);
		   }printf("\n");
	   }
   }
	getchar();
}


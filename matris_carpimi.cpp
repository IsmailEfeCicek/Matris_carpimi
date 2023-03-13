#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
int A[3][3]={ 1,2,3, 4,5,6, 7,8,9 };
int B[3][3]={ 2,4,6, 8,0,3, 5,7,9 };
int C[3][3]={ 0,0,0, 0,0,0, 0,0,0 };
int i,j,k;
for(i=0;i<3;i++)
{
for(k=0;k<3;k++)
{
for(j=0;j<3;j++) C[i][k]+=A[i][j]*B[j][k];
printf("C[%d][%d]=%3d ",i,k,C[i][k]);
}
printf("\n");
}
    
	getchar();
}


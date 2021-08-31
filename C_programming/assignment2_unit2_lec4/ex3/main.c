/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */
#include "stdio.h"
void main ()
{
	int n1,n2,i,j;
	printf("Enter rows and column of matrix:");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&n1,&n2);
	int a[n1][n2];
	int b[n1][n2];
	printf("Enter elements of matrix:\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("Enter elements a%d%d:",++i,++j);
			--i; --j;
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n2;i++){
		for(j=0;j<n1;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose of matrix:\n");
	for(i=0;i<n2;i++){
		for(j=0;j<n1;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}


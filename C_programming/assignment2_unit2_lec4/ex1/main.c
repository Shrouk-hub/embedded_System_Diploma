/*
 * main.c
 *
 *  Created on: Aug 31, 2021
 *      Author: shrouk
 */

#include "stdio.h"
void main ()
{
	int i,j;
	float arr1[2][2];
	float arr2[2][2];
	float arr3[2][2];
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d:",++i,++j);
			--i; --j;
			fflush(stdout); fflush(stdin);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d:",++i,++j);
			--i; --j;
			fflush(stdout); fflush(stdin);
			scanf("%f",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				arr3[i][j]=arr1[i][j]+arr2[i][j];
				if(i==1&&j==1){
					printf("Sum Of Matrix:\n");
				}
			}
		}
	for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("%.1f\t",arr3[i][j]);
				}
				printf("\n");
			}

}

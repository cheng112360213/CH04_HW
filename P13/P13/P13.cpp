﻿#include <iostream>
#include<stdlib.h>
#include<stdio.h>
void printfArray(const int a[][3]);

int main()
{
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = {1,2,3,4,5} ;
	int array3[2][3] = { {1,2},{4} };

	printf("Value in array1 by row are:\n");
	printfArray(array1);

	printf("Value in array2 by row are:\n");
	printfArray(array2);

	printf("Value in array3 by row are:\n");
	printfArray(array3);
	
	system("pause");
	return 0;
}


void printfArray(const int a[][3])
{
	int i;
	int j;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
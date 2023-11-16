#include <time.h>
#include<stdlib.h>
#include<stdio.h>

#define SIZE 10

void TheSort(int m[]);
void DispArr(const int m[]);

int main()
{
	int arr[SIZE] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;
	DispArr(arr);
	printf("\n\nBefore Sort : \n\n");
	TheSort(arr);
	DispArr(arr);
}

void TheSort(int m[])
{
	int tmp = 0;
	for (int i = SIZE - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (m[j] > m[j + 1]) {
				tmp = m[j + 1];
				m[j + 1] = m[j];
				m[j] = tmp;
			}
		}
	}
}

void DispArr(const int m[])
{
	printf("The array : ");
	for (int i = 0; i < SIZE; i++)
		printf("[%02d] ", i);
	printf("\n            ");
	for (int i = 0; i < SIZE; i++)
		printf("%3d  ", m[i]);
}
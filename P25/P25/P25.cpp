#include <iostream>
#include<stdlib.h>
#include<stdio.h>

int addbyone(int &xref);

int main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyone(int &xref)
{
	printf("xref=%d\n", ++xref);
	return xref;
}

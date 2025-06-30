#include<stdio.h>
int main()
{
	int quantity;
	printf("Enter the quantity:");
	scanf("%d",&quantity);
	quantity%=199;
	printf(" quantity is:%d",quantity);
}
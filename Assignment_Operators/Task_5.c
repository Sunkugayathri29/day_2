#include<stdio.h>
int main()
{
	int books_price;
	printf("Enter the books_price:");
	scanf("%d",&books_price);
	books_price/=199;
	printf(" books_price is:%d",books_price);
	return 0;
}
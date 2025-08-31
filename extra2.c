#include <stdio.h>

void decimal_to_binary_converter(unsigned long long number);

int main(void)
{
	unsigned long long base_10; 
	printf("Enter a base_10 number from 0 -- > 18,446,744,073,709,551,615 \n");
	scanf("%llu", &base_10);

	decimal_to_binary_converter(base_10);

	printf("\n");
	
	return 0;
}

void decimal_to_binary_converter(unsigned long long number)
{
	unsigned long long  q, r;

	q = number/2;
	r = number%2;

	if(q>0)
		decimal_to_binary_converter(q);

	printf("%llu", r);
}

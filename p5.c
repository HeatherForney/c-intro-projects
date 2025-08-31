#include <stdio.h>
#include <stdbool.h>


int find_prime(unsigned int a);

bool check_if_prime(unsigned int a);

int main (void)

{
	unsigned int req_num = 0;
	unsigned int prime_number = 0;

	printf("For which prime number do you want to know the value? ");
	scanf("%u", &req_num);

	if(req_num > 100000)
	{
		printf("Sorry, that's too much for my algorithm.\n");
		
		return 0;

	}
	if (req_num == 1)
	{
		printf("The Prime Number is: 2\n");

		return 0;

	}

	prime_number = find_prime(req_num);

	printf("The Prime Number is: %u\n", prime_number);

	return 0;

}

int find_prime(unsigned int target_num)
{
	unsigned int prime_index = 2;
	unsigned int counter = 3;

	while (prime_index <= target_num)
	{

		if (counter % 2 == 1)
		{
			
			
			if (check_if_prime(counter) == true)
			{
				prime_index++;
			}	

		}

		if (prime_index <= target_num)
		{
			counter+=2;
		}
	}

	return counter;
}

bool check_if_prime(unsigned int test_number)
{
	bool is_prime = true;

	for (unsigned int prime_checker = 3;
		(prime_checker * prime_checker) <= test_number;
			prime_checker+=2)
		{

			if (test_number % prime_checker == 0)
			{
				is_prime = false;
				break;
			}

		}
	
	return is_prime;
}

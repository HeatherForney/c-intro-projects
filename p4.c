#include <stdio.h>
#include <stdbool.h>


int findPrime(int a);


int main (void)

{
	int req_num = 0;
	int prime_number = 0;

	printf("For which prime number do you want to know the value? ");
	scanf("%i", &req_num);

	if(req_num > 100000)
	{
		printf("Sorry, that's too much for my algorithm.");

	}
	if (req_num == 1)
	{
		printf("The Prime Number is: 2\n");

		return 0;

	}

	prime_number = findPrime(req_num);

	printf("The Prime Number is: %i\n", prime_number);

	return 0;

}

int findPrime(int target_num)
{
	int prime_index = 2;
	int counter = 2;

	while (prime_index <= target_num)
	{
		bool is_prime = true;


		if (counter % 2 == 1)
		{
			for (int prime_checker = 2;
			    (prime_checker * prime_checker) <= counter;
			     prime_checker++)
			{

				if (counter % prime_checker == 0)
				{
					is_prime = false;
					break;
				}

			}
			
			if (is_prime == true)
			{
				prime_index++;
			}	

		}

		if (prime_index <= target_num)
		{
			counter++;
		}
	}

	return counter;
}

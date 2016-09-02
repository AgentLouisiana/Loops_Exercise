#include <iostream>
#include "loops.h"

int main()
{
		//#1
		
		/*Using a for loop to iterate backward, print the values 100 to 0.
		- Modify the for loop to include 0 and include 100
		- Modify the for loop to include 0 and not 100
		- Modify the for loop to not include 0 and include 100
		- Modify the for loop to decrement by 2*/
	{
		int loop = 100;
		for (int i = 100; i > -1; i--)
		{
			std::cout << i << std::endl;
		}


		system("pause");


		{
			int loop = 100;
			for (int i = 99; i > -1; i--)
			{
				std::cout << i << std::endl;
			}
		}
		{
			int loop = 100;
			for (int i = 100; i > 0; i--)
			{
				std::cout << i << std::endl;
			}
		}
		{
			int loop = 100;
			for (int i = 100; i > -1; i--)
			{
				if (i % 2 == 0)
				{
					continue;
				}
				std::cout << i << std::endl;
			}
		}
	}
		system("pause");

			//#2

			/*Using a for loop, iterate through numbers 0 to 100.
				- For multiples of 3 print “Fizz”
				- For multiples of 5 print “Buzz”
				- For multiples of 3 and 5 print “FizzBuzz”
				- Otherwise print the number.
				Note, you will need to use the modulus operator (%)*/

			int loop = 100;
			for (int i = 0; i < 101; i++)
			{
				if (i % 3 == 0 && i % 5 != 0)
				{
					std::cout << "Fizz" << std::endl;
				}
				else if (i % 5 == 0 && i % 3 != 0)
				{
					std::cout << "Buzz" << std::endl;
				}
				else if (i % 5 == 0 && i % 3 == 0)
				{
					std::cout << "FizzBuzz" << std::endl;
				}
				else
				{		
					std::cout << i << std::endl;
				}
	
			}

			system("pause");

			//3

			//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
			//of these multiples is 23.

			//Find the sum of all the multiples of 3 or 5 below 1000.

			int multiple[1000];
			int sum = 0;
				for (int i = 0; i < 1000; i++)
			{
				if (i % 3 == 0 && i % 5 != 0)
				{
						multiple[i] = i;
				}
				else if (i % 5 == 0 && i % 3 != 0)
				{
					multiple[i] = i;
				}
				else
				{
					multiple[i] = 0;
				}
			}
			for (int i = 0; i < 1000; i++)
			{
				sum = multiple[i] + sum;
			}

			std::cout << sum << std::endl;
			system("pause");

			//4
			/*Complete the above 3 exercises using a “while” loop.*/

			int i = 0;
			int multipleb[1000];
			int sumb = 0;

			while (i < 1000)
			{
			if (i % 3 == 0 && i % 5 != 0)
					{
							multipleb[i] = i;
					}
					else if (i % 5 == 0 && i % 3 != 0)
					{
						multipleb[i] = i;
					}
					else
					{
						multipleb[i] = 0;
					}
					i++;
			}

			i = 0;

			while (i < 1000)
			{
				sumb = multipleb[i] + sumb;
				i++;
			}

			std::cout << sumb << std::endl;

			system("pause");
			return 0;
}
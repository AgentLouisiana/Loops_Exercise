#include <iostream>
#include "loops.h"

int main()
{
		////#1
		//
		//	int loop = 100;
		//	for (int i = 100; i > -1; i--)
		//	{
		//		std::cout << i << std::endl;
		//	}
		//

		//system("pause");

		//
		//{
		//	int loop = 100;
		//	for (int i = 99; i > -1; i--)
		//	{
		//		std::cout << i << std::endl;
		//	}
		//}
		//{
		//	int loop = 100;
		//	for (int i = 100; i > 0; i--)
		//	{
		//		std::cout << i << std::endl;
		//	}
		//}
		//{
		//	int loop = 100;
		//	for (int i = 100; i > -1; i--)
		//	{
		//		if (i % 2 == 0)
		//		{
		//			continue;
		//		}
		//		std::cout << i << std::endl;
		//	}
		//}
			//#2

			/*Using a for loop, iterate through numbers 0 to 100.
				- For multiples of 3 print �Fizz�
				- For multiples of 5 print �Buzz�
				- For multiples of 3 and 5 print �FizzBuzz�
				- Otherwise print the number.
				Note, you will need to use the modulus operator (%)*/
		{
			int loop = 100;
			for (int i = 0; i < 101; i++)

				if (i % 3 == 0)
				{
					printf("Fizz");
				}
				else if (i % 5 == 0)
				{
					printf("Buzz");
				}
				else if (i % 5 || i % 3 == 0)
				{
					printf("FizzBuzz");
				}

				std::cout << i << std::endl;
		}

	system("pause");
	return 0;
}
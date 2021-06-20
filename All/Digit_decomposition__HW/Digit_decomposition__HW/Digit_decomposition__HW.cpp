#include <iostream>

int main()
{
	int64_t x;
	int sum = 0;
	int count = 0;
	std::cout << "Input value:" << std::endl;
	std::cin >> x;
	while (x > 0)
	{
		sum = sum + x % 10;
		x /= 10;
		count++;
	}
	printf("Sum = %d", sum);
	std::cout << std::endl;
	printf("Count = %d", count);
	std::cout << std::endl << std::endl;
	
	system("pause");
	return 0;
}
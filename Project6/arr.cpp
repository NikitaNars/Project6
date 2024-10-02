#include <iostream>

int main()
{
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 16 + -5;
		if (i == 10)
		{
			std::cout << std::endl;
		}
		std::cout << arr[i] << " ";
	}

}
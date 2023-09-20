#include <iostream>

int* clear_function(int* array, int arrSize)
{
	int index;
	std::cin >> index;
	for (int i = index; i < arrSize; i++)
	{
		array[i] = NULL;
	}

	return 0;
}

int main()
{
	int arrSize;
	std::cin >> arrSize;
	int* arr = new int[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = i + 1;
	}



	clear_function(arr, arrSize);

	for (int i = 0; i < 10; i++)
	{
		std::cout << *&arr[i];
	}
}
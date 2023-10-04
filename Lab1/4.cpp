#include <iostream>

int* clear_function(int* array, int index)
{
	int* newArr = new int[index];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = array[i];
	}

	delete array;

	return newArr;
}

int main()
{
	int arrSize;
	std::cin >> arrSize;
	int index;
	std::cin >> index;
	int* arr = new int[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = i + 1;
	}



	int* pointer = clear_function(arr, index);

	for (int i = 0; i < index; i++)
	{
		std::cout << pointer[i];
	}
}

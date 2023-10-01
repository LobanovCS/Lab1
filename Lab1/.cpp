#include <iostream>;

int main()
{
	int arr1size, arr2size;
	std::cin >> arr1size;
	std::cin >> arr2size;

	int* arr1 = new int[arr1size];

	for (int i = 0; i < arr1size; i++)
	{
		arr1[i] = i;
	}

	int* arr2 = new int[arr2size];
	
	for (int i = 0; i < arr2size; i++)
	{
		arr2[i] = i+5;
	}

	int arr3size = 0;
	
	for (int i = 0; i < arr1size; i++)
	{
		int equ = 0;
		for (int j = 0; j < arr2size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				equ++;
				break;
			}
		}
		if (equ == 0)
		{
			arr3size++;
		}
	}

	int* arr3 = new int[arr3size];
	int arr3index = 0;
	for (int i = 0; i < arr1size; i++)
	{
		int equ = 0;
		for (int j = 0; j < arr2size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				equ++;
				break;
			}
		}
		if (equ == 0)
		{
			arr3[arr3index] = arr1[i];
			arr3index++;
		}
	}

	for (int i = 0; i < arr3size; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
}

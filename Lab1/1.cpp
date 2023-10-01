#include <iostream>
using namespace std;
int main()
{
	int arr1size, arr2size; cin >> arr1size >> arr2size;

	int* arr1 = new int[arr1size];
	for (int i = 0; i < arr1size; i++)
	{
		arr1[i] = i;
	}

	int* arr2 = new int[arr2size];
	for (int i = 0; i < arr2size; i++)
	{
		arr2[i] = i + 5;
	}

	int arr3size = 0;
	for (int i = 0; i < arr1size; i++)
	{
		for (int j = 0; j < arr2size; j++)
		{
			if (arr1[i] == arr2[j])
				arr3size++;
		}
	}

	int* arr3 = new int[arr3size];

	int g = 0;
	for (int i = 0; i < arr1size; i++)
	{
		for (int j = 0; j < arr2size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				arr3[g] = arr1[i];
				g++;
			}
		}
	}

	for (int i = 0; i < arr3size; i++)
	{
		cout << arr3[i] << endl;
	}
}

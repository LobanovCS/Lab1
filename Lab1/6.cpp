#include <iostream>
using namespace std;

int* insert_arr(int* array, int insertIndex)
{
	int* newArr = new int[insertIndex];

	for (int i = 0; i < insertIndex; i++)
	{
		newArr[i] = array[i];
	}

	delete[] array;

	for (int i = 0; i < insertIndex; i++)
	{
		newArr[i] = i;
	}

	return newArr;
}

int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}

	int index;
	cin >> index;

	int* pointer = insert_arr(arr, index);

	for (int i = 0; i < index; i++)
	{
		cout << pointer[i] << endl;
	}

	return 0;
}

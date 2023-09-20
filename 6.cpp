#include <iostream>
using namespace std;

int insert_arr(int insertIndex)
{
	cin >> insertIndex;
	int result;
	result = insertIndex;
	return result;
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = NULL;
	}

	int index = 0;

	for (int i = insert_arr(index); i < 10; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}
#pragma once
#include <iostream>
using namespace std;

template <typename T>
void showArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

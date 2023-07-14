#include <iostream>
#include "Functions.h"
int num = 100;


using namespace std;

void crat(int arr[], int size)
{
	for (int i=0; i < size; i++)
	{
		if (arr[i]%10 ==0)
		{
			arr[i] = 0;
		}
	}
}

void evenOrOdd(int arr[], int size)
{

	for (int i=0;i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] /= 2; 
		}
		else
		{
			arr[i] *= 2;
		}
	}
}

//Даны две строки.Найти общее количество букв
//h в них.

int getCountLetter(char strok1[], char strok2[], int size, int size2,char local)
{
	int hsumm = 0;
	for (int i = 0; i < size; i++)
	{
		if (strok1[i] == local)
		{
			hsumm++;
		}
	}
	for (int i = 0; i < size2; i++)
	{
		if (strok2[i] == local)
		{
			hsumm++;
		}
	}
	return hsumm;
}

//void up(int& n)
//{
//	n+=10;
//}
void changeArr(int arr[])
{
	arr[0] = 222;
	num *= 2;
}

int main()
{
	{
		int n;
	}
	
	int n;


	//int result = 30;
	//cout << num+result << endl;
	//int arr[3] = { 2,3,4 };
	//changeArr(arr);
	//cout << arr[0]<< endl; // 222
	//cout << num+result;
	/*int n = 10;
	up(n);
	cout << n;*/











	//char  search;
	//const int size =5;
	//const int size2 =7;
	//char strok1 [size]{'a','h','h','b','/0'};
	//char strok2 [size2]{'a','h','h','b','h','b','/0'};
	//cin >> search;
	//cout << getCountLetter(strok1, strok2, size, size2, search);
	/*const int size = 10;
	int mass[size] = { 20,20,20,50,1,5,2,1,4,120 };
	showArray(mass,size);
	crat(mass, size);
	showArray(mass, size);
	evenOrOdd(mass, size);
	showArray(mass, size);*/
	//cout << mass;
}
/*
Написать функции
1) 
Написать функцию, которая определяет каких элементов
в массиве больше чётных или нечётных
Ввести массив, состоящий из 10 элементов целого типа. 
Определить
каких элементов больше четных или нечетных по значению.

2) 
Написать функцию, которая определяет количество элементов 
в массиве, которые больше первого.
Задан массив, состоящий из 10 элементов 
вещественного типа. 
Определить количество элементов, 
значения которых больше первого элемента

3) 
Написать функцию, которая определяет сумму чётных по значению
положительных элементов в массиве
Ввести целочисленный массив, состоящий из 10 элементов. 
Вычислить количество и сумму четных по значению 
положительных элементов.
*/
#include <iostream>
using namespace std;

/* Общий синтаксис определения функции
типВозвращаемогоЗначения имяФункции(список параметров)
{
	тело функции
}
*/

/*
Ввести массив, состоящий из 10 элементов целого типа.
Определить
каких элементов больше четных или нечетных по значению.
*/

void evenOrOdd(int arr[],int size)
{
	int even=0;
	int odd=0;
	for(int i=0;i<size;i++)
    {
		if(arr[i]%2==0)
		{
			even ++;
		}
		else
		{
			odd ++;
		}
	}
	if(even>odd)
	{
		cout << "More even";
	}
	else if(even<odd)
	{
		cout << "More odd";
	}
	else
	{
		cout << "equals";
	}
	cout << endl;
}

int  howManyElementsBiggerFirst(int arr[],int size)
{
	 int counter=0;
	 for(int i=1;i<size;i++)
	 {
	 	if(arr[0]<arr[i])
		{
			counter ++;
		}
	 }
	 return counter;
	 
}

template <typename T>
void showArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
T getSummEvenPositive(T arr[], int size)
{
	T summ=0;
	for(int i=0; i<size;i++)
	{
		if(arr[i]%2==0 && arr[i]>0)
		{
			summ+= arr[i];
		}
	}
	return summ;
}


int main()
{	
	char mess[6] = { 'h','e','\0','l','\0','o'};

	cout << mess;

	/*for (int i = 0; i < 5; i++)
	{
		cout << mess[i];
	}*/
	
	//cout << "Hi"; //строковый литерал


	//const int size=10;
	//short mass2[size/2] = { 3, 6, 8, 0,33 };
	//showArray(mass2, size / 2);
	//int mass1 [size] {4,2,1,1,1,1,1,9,10,11};
	//showArray(mass1, size);
	///*evenOrOdd(mass1,size);
	//cout <<  howManyElementsBiggerFirst(mass1,size);
	//cout << endl;*/
	//cout << getSummEvenPositive(mass2,size/2);
	return 0;
}
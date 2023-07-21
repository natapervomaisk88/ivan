#include <iostream>
using namespace std;
/*
1) Парадигма процедурного программирования
2) Переменные, константа
3) Типы данных (какие бывают и сколько места занимают в памяти)
4) Выражение
5) Какую проблему решает приведение типов данных в выражении
6) Массивы, какую проблему решают, индексы
7) Функция с логической точки зрения и с технической точки зрения
8) Ссылки
9) Указатели
10) Что такое строка, функции по работе со строками
11) Что такое файл и какие бывают файлы
*/


/*
Tasks:
1)
Запросить размерность массива у пользователя
Создать массив
Запросить элементы массива с клавиатуры
Найти сумму четных элементов массива
Найти индекс наибольшего элемента массива
Найти кол-во отрицательных элементов массива
*/

void changeValue(int* a)
{
	(*a) += 10;
}

void changeValueRef(int& a)
{
	a += 10;
}

int main()
{
	while (true)
	{
		cout << 1;
	}
	//int negative = 0;
	//int index = 0;
	//int max;
	//int sum = 0 ;
	//int size1;
	//cout << "Enter size:";
	//cin >> size1;
	//long* prices = new long [size1];
 //   for(int i=0; i < size1;i++)
	//{
	//	cout << "Enter value: ";
	//	cin >> prices[i];
	//}
	//for(int i=0; i<size1;i++)
	//{
	//	if(prices[i]%2 ==0)
	//	{
	//		sum+=prices[i];
	//	}
	//}
	//cout << endl;
	//cout << "Summ =" << sum << endl;
	//max = prices[0];

	//for(int i=0; i<size1;i++)
	//{
	//	if(prices[i] > max)
	//	{
	//		index = i;
	//		max = prices[i];
	//	}
	//}

	//cout << "Max index: "<<index<<endl;
	//for(int i=0;i < size1 ; i++)
	//{
	//	if(prices[i]<0)
	//	{
	//		negative ++;
	//	}
	//}
	//cout << negative;
	//delete[] prices; //очистка динамической памяти


	//


	//int size;
	//cout << "Enter size:";
	//cin >> size;
	//bool* arr = new bool[size];


	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Address: " << &arr[i] << ". Value: " << arr[i] << " ";
	//	cout << endl;
	//}
	//delete[] arr;
	/*int n = 100;
	int& refN = n;
	changeValue(&n);
	changeValueRef(refN);
	cout << n;*/

	//char a = 'A';
	//char* ptrA = &a; //создание указателя
	//*ptrA = 50;
	//cout << a;
	return 0;
}
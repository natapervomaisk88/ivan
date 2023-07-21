#include <iostream>
using namespace std;

/*
Напишите функцию, которая принимает строку в качестве входного параметра и 
возвращает количество цифр в этой строке.
*/


int getCountNumber(char str[])
{
	int counter = 0;
	
	for(int i=0;i < strlen(str);i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			counter++;
		}
	}
	/*
	int i = 0;
	while(str[i]!='\0')
	{
		if(str[i]>=48 && str[i]<=57)
		{
			counter++;
		}
		i++;
	}*/
	return counter;
}

int main()
{
	setlocale(LC_ALL, "ru");
	//int a = 10;
	//cout << &a << endl; //оператор взятия адреса
	//int* ptrA = &a;
	//cout << ptrA;

	short b=99;
	short* ptrB = &b;
	cout << ptrB;
	cout << endl;
	cout << *ptrB << endl; //оператор разименования, разадресация
	*ptrB = 101;
	cout << b;




	/*cout << "Сколько у тебя продуктов?";
	int counter;
	cin >> counter;

	int productPrices[counter];*/











	/*char stroka[100];
	cin >> stroka;
	int result = getCountNumber(stroka) ;
	cout << result;*/
//	//Массив целых чисел
//	int arr[5] = { 2,3,4,6,8 };
//	cout << arr << endl; //адрес начала массива
//
//	//Строка - массив, типа char c \0 в конце
//	char str[] = "Hello World";
//	cout << str << endl; // строку Hello World
//
//	char str2[3] = { 'r','e','d' }; //массив символов (НЕ строка, потому что нет \0 в конце)
//	cout << str2 << endl; //распечатываться будет пока не встретит \0

}
#include <iostream>
using namespace std;

//Написать функцию, которая принимает на вход число и возвращает true если число >=0
// и false если число <0
bool isPositive(int number)
{
	if (number >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
void printMessage()
{
	cout << "Bye\n";
}
int makeSum(int chis1,int chis2)
{
	return  chis1 + chis2;
}
void isEven(int chis1); //Прототип функции


void showArray(float arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

//создать функцию, которая принимает на вход массив типа float
//и возвращает сумму элементов этого массива
float massSum(float arr[],int size);

int main()
{
	const int size = 5;
	float mass1[size]={5.5,10.3,11,7.4,1.1};
    showArray(mass1,size);
	cout << endl;
	cout << massSum(mass1,size);	
	/*
	int massive[10] = { 4,53,2,57,4,7,8,9,3,6 };
	showArray(massive, 2);*/

	/*int chis123;
	cout<< "Vvedite chislo:";
	cin >> chis123;
	isEven(chis123);
	if(isPositive(chis123)== true)
	{
		cout << "Positive or zero";	
	}
	else 
	{
		cout << "negative";
	}*/
	/*int a = 99;
	int b = -1;
	int result = makeSum(a, b);
	int sum = result * 2;
	cout <<	result;*/

	//написать функция суммы
	

	//srand(time(0));
	//
	//const int size = 5;
	//int arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 10;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i] ;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
}

//Написать функцию которая принимает на вход число и печатает фразу
// Чётное число или нет
void isEven(int chis1)
{
	if (chis1 % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Not Even";
	}
}
float massSum(float arr[],int size)
{
	float sum=0;
  	for(int i=0;i<size;i++)
	{
    	sum += arr[i];
	}
	return sum;
}
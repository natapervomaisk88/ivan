#include <iostream>
using namespace std;

/*
�������� �������, ������� ��������� ������ � �������� �������� ��������� � 
���������� ���������� ���� � ���� ������.
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
	//cout << &a << endl; //�������� ������ ������
	//int* ptrA = &a;
	//cout << ptrA;

	short b=99;
	short* ptrB = &b;
	cout << ptrB;
	cout << endl;
	cout << *ptrB << endl; //�������� �������������, ������������
	*ptrB = 101;
	cout << b;




	/*cout << "������� � ���� ���������?";
	int counter;
	cin >> counter;

	int productPrices[counter];*/











	/*char stroka[100];
	cin >> stroka;
	int result = getCountNumber(stroka) ;
	cout << result;*/
//	//������ ����� �����
//	int arr[5] = { 2,3,4,6,8 };
//	cout << arr << endl; //����� ������ �������
//
//	//������ - ������, ���� char c \0 � �����
//	char str[] = "Hello World";
//	cout << str << endl; // ������ Hello World
//
//	char str2[3] = { 'r','e','d' }; //������ �������� (�� ������, ������ ��� ��� \0 � �����)
//	cout << str2 << endl; //��������������� ����� ���� �� �������� \0

}
#include <iostream>
using namespace std;
/*
1) ��������� ������������ ����������������
2) ����������, ���������
3) ���� ������ (����� ������ � ������� ����� �������� � ������)
4) ���������
5) ����� �������� ������ ���������� ����� ������ � ���������
6) �������, ����� �������� ������, �������
7) ������� � ���������� ����� ������ � � ����������� ����� ������
8) ������
9) ���������
10) ��� ����� ������, ������� �� ������ �� ��������
11) ��� ����� ���� � ����� ������ �����
*/


/*
Tasks:
1)
��������� ����������� ������� � ������������
������� ������
��������� �������� ������� � ����������
����� ����� ������ ��������� �������
����� ������ ����������� �������� �������
����� ���-�� ������������� ��������� �������
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
	//delete[] prices; //������� ������������ ������


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
	//char* ptrA = &a; //�������� ���������
	//*ptrA = 50;
	//cout << a;
	return 0;
}
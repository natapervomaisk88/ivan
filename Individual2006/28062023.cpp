#include <iostream>
using namespace std;

/*
Task1:
# ������������ ������ � ���������� ��� �����.
# ���������� ����� ����� �����, ������������ �����.
# ��������� ���������� ������� �� �����.

Task2:
# ������������ ������ � ���������� ��� �����.
# ������ ����� � �������� �� �����, ������ ����� �
# ����� ��������� ������� �� ������� � �����,
# ������ ����� �� ������������� �� ������������ ������.
# ���������� ������� �� ����� �����,
# ������� ��������� � ������������ ����� ���� ������.

Task3:
# ������������ ������ � ���������� ��� �����.
# ���������� ������� �����, ���������� ��� �����.
# ��������, ���� � ���������� ������� 1, 5, 7,
# ����� ����� ������������ ����� 157.

Task4:
# ������������ ������ � ���������� �����, ��������� �� ������� ����.
# ��������� ����� ������������ ����. ��������, ���� � ����������
# ������� 132, ����� ��������� ������������ 1*3*2 = 6.

Task5:
������������ ������ � ���������� �����, ���� ��� ������������� ��� ����� 0 
�� ���������� ������� ��� ����� � ��������
���� ��� ����� ������������� �� ���������� �������� ��� �� -1

Task6:
������� ������ �� 6-�� ������ ��������, ����� ����������� � ������������ ������
��������� ������� ��������������. �������� ������� ������ � ������ ������ 
� �������


*/
int main()
{
	/*
	Task1:
# ������������ ������ � ���������� ��� �����.
# ���������� ����� ����� �����, ������������ �����.
# ��������� ���������� ������� �� �����.
	*/
	/*int chis1;
	int chis2;
	int chis3;
	int sum;
	int dob;
	cout << "Vvedite chislo";
	cin >> chis1;
	cout << "Vvedite chislo";
	cin >> chis2;
	cout << "Vvedite chislo";
	cin >> chis3;
	sum = chis1+chis2+chis3;
	dob = chis1*chis2*chis3;
	cout << sum <<  endl;
	cout << dob; */

	/*
	Task2:
# ������������ ������ � ���������� ��� �����.
# ������ ����� � �������� �� �����, ������ ����� �
# ����� ��������� ������� �� ������� � �����,
# ������ ����� �� ������������� �� ������������ ������.
# ���������� ������� �� ����� �����,
# ������� ��������� � ������������ ����� ���� ������.
	*/
 /*   int chis1;
	int chis2;
	int chis3;
	int sum;
	int dob;
	cout << "Vvedite chislo";
	cin >> chis1;
	cout << "Vvedite chislo";
	cin >> chis2;
	cout << "Vvedite chislo";
	cin >> chis3;
	sum = chis2+chis3;
	dob = chis1-sum;*/

	/*
	Task3:
# ������������ ������ � ���������� ��� �����.
# ���������� ������� �����, ���������� ��� �����.
# ��������, ���� � ���������� ������� 1, 5, 7,
# ����� ����� ������������ ����� 157.
	*/
	//int chis1;
	//int chis2;
	//int chis3;
	//int result;
	//cout << "Vvedite chislo";
	//cin >> chis1;
	//cout << "Vvedite chislo";
	//cin >> chis2;
	//cout << "Vvedite chislo";
	//cin >> chis3;
	//if (chis1 >= 0 && chis1 <=9 &&chis2 >=0 && chis2 <=9 && chis3 >=0 && chis3 <=9)
 //   {
	//	result = (chis1 * 100) + (chis2 * 10) + chis3;
	//	cout << "Result:" <<  result;
	//}
	//else
	//{
	//	cout << "error";
	//}
	//	
	/*
	Task6:
������� ������ �� 6-�� ������ ��������, 
�������� ������� ������ � ������ ������
����� ����������� � 
������������ ������
��������� ������� ��������������. 

� �������
	*/
	const int size=6;
	int grades[size]{10,6,3,9,5,12};
    int temp=grades[0];
	grades[0] = grades[5];
	grades[5] = temp;
	int min=grades[0];
	int max=grades[0];
    int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += grades[i];
		if (grades[i] < min)
		{
    		min= grades[i];
		}	
		if (grades[i] > max)
		{
    		max= grades[i];
		}	
	}
	cout << sum/size << endl;
	cout << min << endl;
	cout << max << endl;


	int x = 5;
	int y = 2;
	
	double x2 = 10.2;
	bool result = true;
	cout << x+y*result+x2;
	return 0;
}
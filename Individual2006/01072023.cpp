#include <iostream>
#include <cmath>
using namespace std;
/*
* Task1:
��������� � ������������ 5 ��������� �������. 
��������� ������� ����� ��� ������

Task2:
������� ������ � ������ ��������� �� 5 ���������. 
��������� ��� � ����������. 
����� ����������� � ������������ �������. 
���������� ����� ����� ���� ���. 
� ���������� ������������ ������ ���� ��� �� ��������.

*/


int main()
{
    //����� ��������
    const int size = 5;
    int arr[size] = { 3,2,8,5,-1 }; 
    //����� ������ ��������, ������� ����� ������������
    cout << "Enter value: ";
    int search;
    cin >> search; //8
    bool isSuccess = false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
          cout << i;
          isSuccess = true;
          break;  
        }
    }

    if (isSuccess==false)
    {
        cout << "Not found";
    }

    //int dob3=1;
    //int sum=0;
    //const int size =5;
    //int mass[size];
    //int min, max;
    //for (int i=0; i < size; i++)
    //{ 
    //    cout << "Enter element: ";
    //    cin >> mass[i];
    //}   
    //min = mass[0];
    //max = mass[0];

    //for (int i = 0; i < size; i++)
    //{
    //    sum += mass[i];
    //    cout << endl;
    //    cout << mass[i] << " ";
    //    if (mass[i] > max) //���������� ���������
    //    {
    //        max = mass[i];
    //    }
    //    if (mass[i] < min) //���������� ��������
    //    {
    //        min = mass[i];
    //    }
    //}
    //for (int i=0; i <= 2;i++)
    //{
    //    dob3 *= mass[i];
    //}
    //cout << dob3;
    //cout << sizeof(mass); //���������� ������ �������
   


    //cout << 13%6 << endl; //�������� ��������. ����� ���: �������1 �������� �������2

    //cout << sqrt(25) << endl ; // => 5 ���������� ������
    //cout << abs(-10) << endl; //�������� �� ������
    ////cout << pow(10, 5) << endl;  // = > 2*2*2 10*10*10*10*10
    //int chis1;
    //cout << "vvedite chislo";
    //cin >> chis1;
    //if (chis1 > 0)
    //{
    //    chis1 = pow(chis1, 2); // chis1 *= chis1; ���������� � �������
    //    cout << chis1;
    //}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    /*
    1) ������������� ������ ��������� ����� �� 10 ���������
    2) ��������� �����, ������� ��������������, ������� � �������� �����
    3) �������� �������� �����
    4) ������������� ���� ������ ������� ����������� ����������
    5) ���������� ��������������� ������
    */
    const int SIZE = 4;
    int temp;
    int arr[SIZE] = { 7,4,-1,3 };
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                // ������ �������� �������
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    //srand(time(0));
    //int minDiap = -10;
    //int maxDiap = 0;
    //cout << rand()%(maxDiap-minDiap)+minDiap;
    //const int SIZE = 10; //�������� ��������� 
    //int arr[SIZE]; //�������� ������ �� SIZE ���������

    //srand(time(0)); //������� ����� ��� ��������� ���������� �����
    //// ���������� ������� � �����
    //int minDiap = 10;
    //int maxDiap = 20;
    //for (int i = 0; i < SIZE; i++) {
    //    cout << "arr[" << i << "] = "; 
    //    arr[i] = rand() % (maxDiap - minDiap) + minDiap; //�������� ��������� �� 10 - 20
    //    cout << arr[i] << endl;
    //}

    //int temp; // ��������� ���������� ��� ������ ��������� �������

    //// ���������� ������� ���������
    //for (int i = 0; i < SIZE - 1; i++) {
    //    for (int j = 0; j < SIZE - i - 1; j++) {
    //        if (arr[j] > arr[j + 1]) {
    //            // ������ �������� �������
    //            temp = arr[j];
    //            arr[j] = arr[j + 1];
    //            arr[j + 1] = temp;
    //        }
    //    }
    //}

    //// ����� ���������������� ������� �� �����
    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    ////�������� �����
    //int search;
    //cin >> search;
    //bool flag = false;
    //int left = 0; // ����� �������
    //int right = SIZE - 1; // ������ �������
    //int middle;

    //while ((left <= right) && (flag != true)) {
    //    middle = (left + right) / 2; // ��������� ��������� ������ ������� [left,right]

    //    if (arr[middle] == search) flag = true; //��������� ���� �� ���������� ���������
    //    if (arr[middle] > search) right = middle - 1; // ���������, ����� ����� ����� ���������
    //    else left = middle + 1;
    //}

    //if (flag) cout << "������ �������� " << search << " � ������� �����: " << middle;
    //else cout << "��������, �� ������ �������� � ������� ���";



	//const int size1 = 10; 
	//int prices[size1]{};
	//int count[size1]{};
	//int sum = 0;
 //   for (int i=0; i < size1; i++)
 //   { 
 //       cout << "Enter element: ";
 //       cin >> prices[i];
 //   }   
 //    for (int i=0; i < size1; i++)
 //   { 
 //       cout << "Enter element: ";
 //       cin >> count[i];
 //   }  
 //   for (int i=0; i < size1; i++)
 //   {
 //       sum += prices[i]*count[i];
 //   }
	////sum = prices[0]*count[0]+prices[1]*count[1]+prices[2]*count[2];
	//cout << sum;
}
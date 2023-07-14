#include <iostream>
#include <cmath>
using namespace std;
/*
* Task1:
Запросить у пользователя 5 элементов массива. 
Посчитать сколько среди них четных

Task2:
Создать массив с ценами продуктов на 5 продуктов. 
Заполнить его с клавиатуры. 
Найти минимальный и максимальный элемент. 
Подсчитать общую сумму всех цен. 
И подсчитать произведение первых трех цен на продукты.

*/


int main()
{
    //Поиск линейный
    const int size = 5;
    int arr[size] = { 3,2,8,5,-1 }; 
    //найти индекс элемента, который введёт пользователь
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
    //    if (mass[i] > max) //Нахождение максимума
    //    {
    //        max = mass[i];
    //    }
    //    if (mass[i] < min) //Нахождение минимума
    //    {
    //        min = mass[i];
    //    }
    //}
    //for (int i=0; i <= 2;i++)
    //{
    //    dob3 *= mass[i];
    //}
    //cout << dob3;
    //cout << sizeof(mass); //показывает размер массива
   


    //cout << 13%6 << endl; //бинарная операция. Общий вид: Операнд1 Оператор Операнд2

    //cout << sqrt(25) << endl ; // => 5 квадратный корень
    //cout << abs(-10) << endl; //значение по модуля
    ////cout << pow(10, 5) << endl;  // = > 2*2*2 10*10*10*10*10
    //int chis1;
    //cout << "vvedite chislo";
    //cin >> chis1;
    //if (chis1 > 0)
    //{
    //    chis1 = pow(chis1, 2); // chis1 *= chis1; возведение в степень
    //    cout << chis1;
    //}
    return 0;
}

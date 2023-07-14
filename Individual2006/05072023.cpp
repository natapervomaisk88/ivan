#include <iostream>
using namespace std;
int main()
{
    /*
    1) Сгенерировать массив случайных чисел на 10 элементов
    2) Посчитать сумму, среднее арифметическое, минимум и максимум найти
    3) Написать линейный поиск
    4) Отсортировать этот массив методом Пузырьковой сортировки
    5) Отобразить отсортированный массив
    */
    const int SIZE = 4;
    int temp;
    int arr[SIZE] = { 7,4,-1,3 };
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
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
    //const int SIZE = 10; //создаётся константа 
    //int arr[SIZE]; //создаётся массив на SIZE элементов

    //srand(time(0)); //функция нужна для генерации случайного числа
    //// заполнение массива в цикле
    //int minDiap = 10;
    //int maxDiap = 20;
    //for (int i = 0; i < SIZE; i++) {
    //    cout << "arr[" << i << "] = "; 
    //    arr[i] = rand() % (maxDiap - minDiap) + minDiap; //диапазон генерации от 10 - 20
    //    cout << arr[i] << endl;
    //}

    //int temp; // временная переменная для обмена элементов местами

    //// Сортировка массива пузырьком
    //for (int i = 0; i < SIZE - 1; i++) {
    //    for (int j = 0; j < SIZE - i - 1; j++) {
    //        if (arr[j] > arr[j + 1]) {
    //            // меняем элементы местами
    //            temp = arr[j];
    //            arr[j] = arr[j + 1];
    //            arr[j + 1] = temp;
    //        }
    //    }
    //}

    //// Вывод отсортированного массива на экран
    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    ////Бинарный поиск
    //int search;
    //cin >> search;
    //bool flag = false;
    //int left = 0; // левая граница
    //int right = SIZE - 1; // правая граница
    //int middle;

    //while ((left <= right) && (flag != true)) {
    //    middle = (left + right) / 2; // считываем срединный индекс отрезка [left,right]

    //    if (arr[middle] == search) flag = true; //проверяем ключ со серединным элементом
    //    if (arr[middle] > search) right = middle - 1; // проверяем, какую часть нужно отбросить
    //    else left = middle + 1;
    //}

    //if (flag) cout << "Индекс элемента " << search << " в массиве равен: " << middle;
    //else cout << "Извините, но такого элемента в массиве нет";



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
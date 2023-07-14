#include <iostream>
using namespace std;

int main()
{
	/*
	запросить у пользователя его возраст,
	если возраст меньше 18, то вывести сообщение Вы ребёнок
	Если возраст от 18 до 70 то Вы взрослый человек
	Иначе Вы пожилой человек
	*/
	//int old; //возраст человека
	//cout << "Enter age:";
	//cin >> old;
	//cout << "Age: " << old;
	//if (old >= 0 && old < 18)
	//{
	//	cout << "you are child";
	//}
	//else if (old >= 18 && old <=70)
	//{
	//	cout << "you are adult";
	//}	
	//else
	//{
	//	cout << "you are old man (elderly)";
	//}

	//циклы. Вывести в консоль цифры от 0 - 9 
	//0 1 2 3 4 5 6 7 8 9 
	// i++ инкремент - это унарный оператор, который
	//увеличивает значение переменной на 1 и перезаписывает её
	//2 + 3; 8 - 7; бинарный оператор
	//int x = 100;
	//cout << ++x << endl; //101
	//cout << x << endl; //101

	//x++; // => x=x+1 постфиксная форма инкремента
	//++x; //префиксная форма инкремента
	//x--; //декремент

	/*for (int i=0;i<=9;i++)
	{
		cout << i << " ";
	}*/
	/*int i = 0;
	while (i <= 9)
	{
		cout << i << " ";
		i = i + 1;
	}*/
	/*10 - 0*/
	const int SIZE = 3; //кол-во продуктов
	float prices[SIZE] = {3,4,2};
	//prices[0] *= 2;
	//prices[1] *= 2;
	//prices[2] *= 2;
	//prices[3] *= 2;
	//prices[4] *= 2;
	float sum = 0;
	//sum = sum + prices[0]; //5.6
	//sum = sum + prices[1]; //5.6+4.7
	//sum = sum + prices[2]; //10.3+0.6
	//sum = sum + prices[3]; //10.9+23.7
	//for (int i = 0; prices[0] + prices[1] + prices[2] + prices[3] + prices[4] + prices[5] + prices[6];)
	//{
	//	prices[i] = prices[i] / 7;
	//	std::cout << prices[i] << endl;
	//}
	//TODO:среднее арифметическое найти 
	for (int i=0;i< SIZE;i++)
	{
		sum += prices[i]; 
		cout << prices[i] << endl;
	}
	cout << sum/SIZE;
	//int x = 100;
	//x += 2; //x=x+2
	//x -= 5; //x=x-5;
	//x /= 5; //x=x/5;
	//x *= 5; //x=x*5;


}
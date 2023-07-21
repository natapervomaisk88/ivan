/*
Напишите функцию, которая принимает строку в 
качестве входного параметра и возвращает ее 
перевернутую версию. Например, если входная строка "Hello, World!", 
функция должна вернуть строку "!dlroW ,olleH".

Разобрать конкатенацию, сравнение, копирование
*/
#include <iostream>
using namespace std;
char* reverse(char strok[])
{
	const int size = 5;
	char newArr[size + 1];
	int j = 0;
    for(int i=strlen(strok)-1;i>=0;i--)	
    {
		newArr[j] = strok[i];
		j++;
    }
	newArr[size] = '\0';
	cout << newArr;
	return newArr;
}
int main()
{
	//char str1[] = "white";
	//cout << strlen(str1)<< endl; //5
	/*const int size = 6;
	char strok1[size];
	cin >> strok1;
	cout << strok1;
	cout << endl;
	reverse(strok1);*/
	cout << strcmp("Hello", "Hello") << endl; //0
	cout << strcmp("Hello", "Hwllo") << endl; //-1
	cout << strcmp("Hwllo", "Hello") << endl; //1
	//cout << strlen(strok1); //длинна строки
	//cout << (int)strok1;
	char str1[] = "Hello";
	char str2[] = "Bye";
	strcpy(str1, str2);


	//HW
	/*
	Задача со строками:
Напишите функцию, которая принимает строку в качестве входного параметра и 
возвращает цифр в этой строке. 
	*/

}
#include <iostream>

using namespace std;

inline double average(double num1, double num2, double num3)
{
	return (num1 + num2 + num3) / 3;
}
short max3(short num1, short num2, short num3)
{
	cout << " Передан тип данных \"int\"\n";
	if (num1 >= num2 && num1 >= 3) return num1;
	else
	return num2 >= num3 ? num2 : num3;
}
int max3(int num1, int num2, int num3)
{
	cout << " Передан тип данных \"short\"\n";
	if (num1 >= num2 && num1 >= 3) return num1;
	else
		return num2 >= num3 ? num2 : num3;
}
double max3(double num1, double num2, double num3)
{
	cout << " Передан тип данных \"double\"\n";
	if (num1 >= num2 && num1 >= 3) return num1;
	else
		return num2 >= num3 ? num2 : num3;
}
template <typename T>
T minArr(T Arr[],const int size)
{
	T min = Arr[0];
		for (int i = 1;i < size;i++) {
		if (Arr[i] < min)
			min = Arr[i];
	}
		return min;
}
int mirror_number(int num)
{
	int mirnum=0;
	do {
		mirnum = (mirnum*10 + num % 10); //1,12,123
		num /= 10;//32,3,0
	} while (num > 0);
	return mirnum;
}
int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	//Создайте встраиваемую функцию, которая
	//принимает три числа и возвращает их среднее
	//арифметическое.
	cout << "\t Home_task_7.1 \n";
	cout << " среднее арифметическое - " << average(5, 10, 3) << "\n\n";


	//Задача 2
	//Создайте перегруженную функцию для нахождения
	//максимального из трёх элементов.Функция должна
	//поддерживать типы int, short и double.Также функция
	//выводит тип данных переданных элементов.

	cout << "\t Home_task_7.2 \n";
	cout << " максимальное из трех переданных чисел - " << max3(15.43, 18.57, 18.75) <<"\n\n";

	//Задача 3
	//Напишите шаблонную функцию для нахождения
	//минимального элемента массива.Функция должна
	//работать с любым типом данных.

	cout << "\t Home_task_7.3 \n";
	int Arr[4] = { 145,276,795,46 };
	cout << " минимальный элемент массива - " << minArr(Arr, 4) << "\n\n";

	//Задача 4
	//Напишите функцию mirror_number, которая
	//принимает число и возвращает его в отражённом виде
	//(например, 123 – 321, 450 – 54 и т.д.).

	cout << "\t Home_task_7.4 \n";
	cout << " число наоборот - " << mirror_number(987654321) << "\n\n";


	return 0;
}
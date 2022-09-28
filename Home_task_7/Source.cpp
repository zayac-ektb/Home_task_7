#include <iostream>

using namespace std;

inline double average(double num1, double num2, double num3)
{
	return (num1 + num2 + num3) / 3;
}
short max3(short num1, short num2, short num3)
{
	cout << " ������� ��� ������ \"int\"\n";
	if (num1 >= num2 && num1 >= 3) return num1;
	else
	return num2 >= num3 ? num2 : num3;
}
int max3(int num1, int num2, int num3)
{
	cout << " ������� ��� ������ \"short\"\n";
	if (num1 >= num2 && num1 >= 3) return num1;
	else
		return num2 >= num3 ? num2 : num3;
}
double max3(double num1, double num2, double num3)
{
	cout << " ������� ��� ������ \"double\"\n";
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

	//������ 1
	//�������� ������������ �������, �������
	//��������� ��� ����� � ���������� �� �������
	//��������������.
	cout << "\t Home_task_7.1 \n";
	cout << " ������� �������������� - " << average(5, 10, 3) << "\n\n";


	//������ 2
	//�������� ������������� ������� ��� ����������
	//������������� �� ��� ���������.������� ������
	//������������ ���� int, short � double.����� �������
	//������� ��� ������ ���������� ���������.

	cout << "\t Home_task_7.2 \n";
	cout << " ������������ �� ���� ���������� ����� - " << max3(15.43, 18.57, 18.75) <<"\n\n";

	//������ 3
	//�������� ��������� ������� ��� ����������
	//������������ �������� �������.������� ������
	//�������� � ����� ����� ������.

	cout << "\t Home_task_7.3 \n";
	int Arr[4] = { 145,276,795,46 };
	cout << " ����������� ������� ������� - " << minArr(Arr, 4) << "\n\n";

	//������ 4
	//�������� ������� mirror_number, �������
	//��������� ����� � ���������� ��� � ��������� ����
	//(��������, 123 � 321, 450 � 54 � �.�.).

	cout << "\t Home_task_7.4 \n";
	cout << " ����� �������� - " << mirror_number(987654321) << "\n\n";


	return 0;
}
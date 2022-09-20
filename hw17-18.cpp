#include <iostream>
double globaln;
inline int sum(int num, int num1, int num2)
{
	int sum_n = num + num1 + num2;
	return sum_n;
	
}
int max(int num1,int num2, int num3)
{
	std::cout << "THERE int \n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}
double max(double num1, double num2, double num3)
{
	std::cout << "THERE double \n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}
short max(short num1, short num2, short num3)
{
	std::cout << "THERE short \n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}
template <typename T>
T min_arr( T arr[])
{
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
	

int main()
{
	setlocale(LC_ALL, "Russian");
	

	std::cout << "Ведите 3 числа: \n";
	for (int i = 0; i < 3; i++)
		std::cin >> globaln;
	std::cout << "\n";
	std::cout << "Сумма введенных вами чисел = " << sum(globaln, globaln, globaln);
	std::cout << "\n\n";

	std::cout << "Сумма введенных вами чисел = " << sum(4, 5, 6) << "\n\n";

	std::cout << "Max = "<< max(343, 44, -87) << "\n";
	std::cout << "Max = " << max(3.4434,- 5.63332, 5.81444) << "\n";
	std::cout << "Max = " << max(-1, 3, 2) << "\n";
	std::cout << "\n\n";

	double arr[5]{ 5, 0, -105, 2, -56 };
	std::cout <<"the minimum value of the array: " << min_arr(arr);
	std::cout << "\n\n";
	int arr1[5]{ 5, 0, 105, 2, -56 };
	std::cout <<"the minimum value of the array: " << min_arr(arr1);
	std::cout << "\n\n";
	float arr2[5]{ 5, 0, 105, 2, 56 };
	std::cout << "the minimum value of the array: " << min_arr(arr2);
	std::cout << "\n\n";
	
	return 0;
}
#include <iostream>
#include <clocale>

int main()
{
	int a;
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	//setlocale(LC_CTYPE, "rus")   //по поводу данного параметра подробно описал комментарий в задании 2

	std::cout << "Введи число: " << std::endl;
	std::cin >> a;
	std::cout << "Введенное число: " << std::endl;
	std::cout << a << std::endl;

	return EXIT_SUCCESS;
}
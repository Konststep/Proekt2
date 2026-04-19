#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
using namespace std;

int main(int argc, char* argv[])
{
	std::string slov;
	
	setlocale(LC_CTYPE, "ru_RU.UTF-8"); 
	//setlocale(LC_CTYPE, "rus"); мне не помогло как в презинтации написано, поискал в интернете решение, решилось только ru_RU.UTF-8

	SetConsoleCP(CP_UTF8);         // если я прописываю (1251) то уже естественно не отображается то что я вписывал в slov русскими буквами
								   // Если оставляю setlocale(LC_CTYPE, "rus")  и в SetConsoleCP(1251), то когда я пишу русскими то все работает, НО
								   // отображается текст иероглифами в выводе cout << "Введи слово " << endl;
	SetConsoleOutputCP(CP_UTF8);   

	cout << "Введи слово " << endl;
	cin >> slov;
	cout << "Введенное слово: " << endl;
	cout << slov << endl;

	return EXIT_SUCCESS;
}
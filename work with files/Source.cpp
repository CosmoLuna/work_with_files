// Персональный шаблон проекта С++
#include <iostream>
#include <fstream> // библиотека, реализующая работу с файловой системой
#include <string>
using namespace std;

int statistic(string &str) {
	ofstream out;
	out.open("statistics.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.length() << "\n";
		out.close();
		return 0;
	}
	out.close();
	return -1;
}


int main() {
	setlocale(LC_ALL, "Russian");

	/*string path = "file.txt"; // переменная, содержащая путь к файлу
	ofstream out; // объект класса ofstream, отвечающий за запись данных в файл. принято называть out или fout
	out.open(path, ios::app); // инициализация полей объекта out или открытие файла path в режиме ios::app

	if (out.is_open()) { // проверка на то, открылся ли наш файл
		cout << "Файл открыт для записи\n";
		// out << "Hello world!\n";
		for (int i = 0; i < 1; i++) {
			string str;
			cout << "Введите строку: ";
			getline(cin, str);
			out << str << "\n"; // добавление записи в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	out.close(); // закрытие файла

	ifstream in;
	in.open(path);
	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str; // строка, в которую будет записываться текст файла
		// char sym;
		//while (in.get(sym))
		// while (!in.eof()) {
			// str += sym;
			// str = "";
			// in >> str;
			// cout << str << endl;
		//}
		while (!in.eof()) {
			getline(in, str);
			cout << str << endl;

		}


	}
	else
		cout << "Ошибка открытия файла\n";
	in.close();

	if (remove("file.txt") == 0)
		cout << "File deleted\n";
	else
		cout << "File deletion error\n";

	// cout << "*"; out << "*";
	// cin >> str; in >> str;

	//cin >> str; in >> str;
	// getline(cin, str); getline (in, str)

*/

	// Задача 1
	cout << "Задача 1\nВведите слово: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;
	cin >> word;
	cout << statistic(word) << endl;

	return 0;
}
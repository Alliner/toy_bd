#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <algorithm>
#pragma warning (disable:4996)
using namespace std;
struct a {
	int from;
	int to;
};
//Source table structure
struct toys {
	string name;
	int cost;
	a age;
};
//list table structure
struct lst {
	a age;
	int nm;
};
class masstr {
private:
	toys* toy;
	int n;
	toys* res;
	int m;
	lst* a;
	int p;
	string nameFile;
public:
	masstr();
	masstr(masstr& z);
	~masstr();
	masstr& operator=(masstr& z);
	void openFile(); //opening a database file (txt)
	void printData(); //print a bd on screen in the form of a table
	void search(); // database search for a given age range
	void add(); // adding a new line to a database in work
	void del(); //deleting a line from a database in work
	void outputFile(); //output to a file of the database in operation, in the form of a table
	void printData2(); //displaying the selected database
	void outputFile2(); //output to a file of the selected database in the form of a table
	void sortCost(); //sort the source database by cost in ascending order
	void sortName(); //sorting the selected table by the name of the toys in alphabetical order, and if 
					//the name of the toys coincides, by the lower age limit in descending order
	void sortName1(); //sorting the selected table by the name of the toys in alphabetical order
	void madeList(); //creating a list (for what age how many toys)
	void printData3(); //displaying the list on the screen in the form of a table
	void outputFile3(); //output the list to a file in the form of a table
	void sortList1(); //sort the list by the lower age limit in ascending order, and if 
					//there is a match, by the upper limit in descending order
	void sortList2(); //sort the list by quantity in ascending order
};
void waitEnter();
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	masstr a;
	int variant;
	while (1) {
		system("cls");
		cout << "  Программа для поиска в таблице из файла игрушек, удовлетворяющих заданным \n  возрастным границам.\n\n\n"
			<< "\tМеню.\n"
			<< " 1. Oткрыть файл для работы с данными\n"
			<< " 2. Вывести исходные данные на экран\n"
			<< " 3. Вывести исходные данные в файл\n"
			<< " 4. Добавить данные\n"
			<< " 5. Удалить данные\n"
			<< " 6. Отобрать данные в возрастном диапазоне, отсортировав по убыванию стоимости\n"
			<< " 7. Вывести отобранные данные на экран\n"
			<< " 8. Вывести отобранные данные в файл\n"
			<< " 9. Сортировка исходной таблицы по стоимости в порядке возрастания.\n"
			<< " 10. Сортировка выходной таблицы по названию игрушек в алфавитном порядке, а при совпадении названия игрушек - по нижней возрастной границе в порядке убывания.\n"
			<< " 11. Сортировка выходной таблицы по названию игрушек в алфавитном порядке.\n"
			<< " 12. Формирование перечня\n"
			<< " 13. Вывести перечень на экран \n"
			<< " 14. Вывести перечень в файл\n"
			<< " 15. Сортировка перечня по нижней возрастной границе в порядке возрастания, а при совпадении - по верхней границе в порядке убывания\n"
			<< " 16. Сортировка перечня по количеству в порядке возрастания\n"
			<< " 17. Проверка конструктора копирования\n"
			<< " 18. Проверка конструктора присваивания\n"
			<< " 19. Закончить работу\n\n"
			<< " Ваш вариант: ";

		cin >> variant;
		switch (variant) {
		case 1: {
			a.openFile();
			waitEnter();
			break; }
		case 2: {
			a.printData();
			waitEnter();
			break; }
		case 3: {
			a.outputFile();
			waitEnter();
			break; }
		case 4: {
			a.add();
			waitEnter();
			break; }
		case 5: {
			a.del();
			waitEnter();
			break; }
		case 6: {
			a.search();
			waitEnter();
			break; }
		case 7: {
			a.printData2();
			waitEnter();
			break; }
		case 8: {
			a.outputFile2();
			waitEnter();
			break; }
		case 9: {
			a.sortCost();
			waitEnter();
			break; }
		case 10: {
			a.sortName();
			waitEnter();
			break; }
		case 11: {
			a.sortName1();
			waitEnter();
			break; }
		case 12: {
			a.madeList();
			waitEnter();
			break; }
		case 13: {
			a.printData3();
			waitEnter();
			break; }
		case 14: {
			a.outputFile3();
			waitEnter();
			break; }
		case 15: {
			a.sortList1();
			waitEnter();
			break; }
		case 16: {
			a.sortList2();
			waitEnter();
			break; }
		case 17: {
			masstr b(a);
			cout << "\n\n Вывод данных исходного массива:\n\n";
			a.printData();
			a.printData2();
			a.printData3();
			cout << "\n\n Вывод данных скопированного массива:\n\n";
			b.printData();
			b.printData2();
			b.printData3();
			waitEnter();
			break; }
		case 18: {
			masstr b, c;
			c = b = a;
			cout << "\n\n Исходный массив: а. Было создано два новых элемента того же класса: b, c."
				<< " Произведено следующее присваивание:\n c = b = a. Вывод данных элемента a:\n\n";
			a.printData();
			a.printData2();
			a.printData3();
			cout << " Вывод данных элемента b:\n\n";
			b.printData();
			b.printData2();
			b.printData3();
			cout << " Вывод данных элемента c:\n\n";
			c.printData();
			c.printData2();
			c.printData3();
			waitEnter();
			break; }
		case 19: {
			a.~masstr();
			exit(1);
			break; }
		default: {
			cout << "Несуществующий вариант, попробуйте еще раз\n";
			waitEnter(); }
		}
	}
}

masstr::masstr()
{
	toys* toy(NULL);
	toys* res(NULL);
	lst* a(NULL);
	n = 0;
	m = 0;
	p = 0;
}
masstr::masstr(masstr& z) {
	int i;
	if (toy != NULL) delete[]toy;
	if (res != NULL) delete[]res;
	if (a != NULL) delete[]a;
	n = z.n;
	if (n == 0) toys * toy(NULL);
	else {
		toy = new toys[n];
		if (toy == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < n; i++)
			toy[i] = z.toy[i];
	}
	m = z.m;
	if (m == 0) toys * res(NULL);
	else {
		res = new toys[m];
		if (res == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < m; i++)
			res[i] = z.res[i];
	}
	p = z.p;
	if (p == 0) lst * a(NULL);
	else {
		a = new lst[p];
		if (a == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < p; i++)
			a[i] = z.a[i];
	}
	nameFile = z.nameFile;
}
masstr::~masstr()
{
	if (toy != NULL) delete[]toy;
	if (res != NULL) delete[]res;
	if (a != NULL) delete[]a;
	cout << "\n\n Сработал деструктор\n";
	waitEnter();
}
masstr & masstr::operator=(masstr & z) {
	int i;
	if (this == &z)return *this;
	if (toy != NULL) delete[]toy;
	if (res != NULL) delete[]res;
	if (a != NULL) delete[]a;
	n = z.n;
	if (n == 0) toys * toy(NULL);
	else {
		toy = new toys[n];
		if (toy == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < n; i++)
			toy[i] = z.toy[i];
	}
	m = z.m;
	if (m == 0) toys * res(NULL);
	else {
		res = new toys[m];
		if (res == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < m; i++)
			res[i] = z.res[i];
	}
	p = z.p;
	if (p == 0) lst * a(NULL);
	else {
		a = new lst[p];
		if (a == NULL) {
			cout << "\n Нет памяти\n";
			waitEnter();
			exit(1);
		}
		for (i = 0; i < p; i++)
			a[i] = z.a[i];
	}
	nameFile = z.nameFile;
	return z;
}
void masstr::openFile() {
	ifstream data;
	do {
		cout << "\n Введите имя файла, или, если он в другой папке, полный путь к нему:  ";
		cin >> nameFile;
		data.open(nameFile);
		if (!data) cout << "\n Такой файл не существует, попробуйте еще раз.\n";
	} while (!data);
	cout << "\n Отлично! Файл открыт\n\n";
	n = 0;
	string str;
	for (int i = 0; !data.eof(); i++) {
		getline(data, str);
		n++;
	}
	if (toy != NULL)delete[]toy;
	toy = new toys[n];
	data.clear();
	data.seekg(0);
	for (int i = 0; !data.eof(); i++) {
		data >> toy[i].age.from >> toy[i].age.to >> toy[i].cost;
		getline(data, toy[i].name);
		toy[i].name.erase(0, 1);
	}
	data.close();
}
void waitEnter() {
	char ch;
	cout << " Для продолжения нажмите Enter";
	while ((ch = _getch()) != 13)
		cout << " " << endl;
}
void masstr::printData()
{
	cout << "  ---------------------------------------------------------------------\n"
		<< "  |     |                                      |           | Возраст  |\n"
		<< "  |  N  |               Название               | Стоимость |----|-----|\n"
		<< "  |     |                                      |           | от | до  |\n"
		<< "  |-----|--------------------------------------|-----------|----|-----|\n";
	for (int i = 0; i < n; i++) {
		cout << "  | " << setw(3) << left << i + 1 << " | " << setw(36) << toy[i].name << " | " << setw(9) << toy[i].cost << " | " << setw(2) << toy[i].age.from << " | " << setw(3) << toy[i].age.to << " |\n";
	}
	cout << "  ---------------------------------------------------------------------\n\n";
}
void masstr::search()
{
	int age;
	m = 0;
	do {
		cout << "\n\n Укажите интересующий возраст: ";
		cin >> age;
		if (age < 0 || age>121) cout << "\n Некорректный возраст, попробуйте еще раз\n\n";
	} while (age < 0 || age>121);
	for (int i = 0; i < n; i++)
		if ((toy[i].age.from <= age) && (toy[i].age.to >= age))
			m++;
	if (res != NULL)delete[]res;
	res = new toys[m];
	m = 0;
	for (int i = 0; i < n; i++)
		if ((toy[i].age.from <= age) && (toy[i].age.to >= age)) {
			res[m] = toy[i];
			m++;
		}
	if (m == 0) {
		cout << "\n\n В таблице нет подходящих данных, вы будете возвращены в меню\n";
		waitEnter();
		return;
	}
	cout << "\n\n В таблице " << m << " подходящих результатов.\n\n";
	toys bubble = {};
	int fl, nn = m;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++) {
			if (res[i].cost < res[i + 1].cost) {
				bubble = res[i];
				res[i] = res[i + 1];
				res[i + 1] = bubble;
				fl = 1;
			}
		}
	} while (fl == 1);
}
void masstr::add() {
	toys* q = new toys[n];
	for (int i = 0; i < n; i++)
		q[i] = toy[i];
	if (toy != NULL)delete[]toy;
	toy = new toys[n + 1];
	for (int i = 0; i < n; i++)
		toy[i] = q[i];
	delete[]q;
	string str;
	int a, b;
	cin.ignore();
	do {
		cout << " Название игрушки (до 35 символов) : ";
		getline(cin, str);
		if (str.length() > 35) cout << "\n Название превышает неоходимую длину, попробуйте сократить\n\n";
	} while (str.length() > 35);
	toy[n].name = str;
	do {
		cout << " Введите стоимость: ";
		cin >> a;
		if (a < 0) cout << "\n Стоимость не может быть отрицательной, попробуйте еще раз\n\n";
		if (a == 0) cout << "\n Стоимость не может быть равной нулю, попробуйте еще раз\n\n";
	} while (a < 0 || a == 0);
	toy[n].cost = a;
	do {
		cout << " Введите возраст, от которого может использоваться игрушка (минимально 0): ";
		cin >> a;
		if (a < 0) cout << "\n Возраст не может быть отрицательным, попробуйте еще раз\n\n";
		if (a > 121) cout << "\n Неправильно указан возраст. Люди столько не живут. Попробуйте еще раз\n\n";
	} while (a < 0 || a>121);
	toy[n].age.from = a;
	do {
		cout << " Введите возраст, до которого может использоваться игрушка (максимально 121): ";
		cin >> b;
		if (b < 0) cout << "\n Возраст не может быть отрицательным, попробуйте еще раз\n\n";
		if (b > 121) cout << "\n Неправильно указан возраст. Люди столько не живут. Попробуйте еще раз\n\n";
		if (b <= a) cout << "\n Неправильно указан возраст, он не должен быть меньше или равен возрасту, от которого ирушка может использоваться. Попробуйте еще раз\n\n";
	} while (b < 0 || b>121 || b <= a);
	toy[n].age.to = b;
	n++;
	cout << "\n Новая позиция добавлена в список.\n\n";
}
void masstr::del()
{
	printData();
	int k; char ch;
	cout << "\n\n Укажите номер строки, которую хотите удалить: ";
	cin >> k;
	k--;
	cout << "\n\n  ---------------------------------------------------------------------\n"
		<< "  |     |                                      |           | Возраст  |\n"
		<< "  |  N  |               Название               | Стоимость |----|-----|\n"
		<< "  |     |                                      |           | от | до  |\n"
		<< "  |-----|--------------------------------------|-----------|----|-----|\n"
		<< "  | " << setw(3) << left << k + 1 << " | " << setw(36) << toy[k].name << " | " << setw(9) << toy[k].cost << " | " << setw(2) << toy[k].age.from << " | " << setw(3) << toy[k].age.to << " |\n"
		<< "  ---------------------------------------------------------------------\n\n"
		<< "\n Вы уверены, что хотите удалить эту строку? (n/y) \n ";
	do {
		cin >> ch;
		if (ch != 'n' && ch != 'y') cout << "\n Некорректный ответ. Удалить строку? (n/y)\n ";
		if (ch == 'n') {
			cout << " Строка не будет удалена\n";
			waitEnter();
			return;
		}
		if (ch == 'y') {
			toys* q = new toys[n];
			for (int i = 0; i < n; i++)
				q[i] = toy[i];
			n--;
			if (toy != NULL)delete[]toy;
			toy = new toys[n];
			for (int i = 0; i < k; i++)
				toy[i] = q[i];
			for (int i = k; i < n; i++) toy[i] = q[i + 1];
			delete[]q;
		}
	} while (ch != 'n' && ch != 'y');
	cout << "\n Строка удалена.\n\n";
}
void masstr::outputFile()
{
	ofstream data;
	do {
		cout << "\n Введите имя файла, в котором хотите сохранить:  ";
		cin >> nameFile;
		data.open(nameFile);
		if (!data) cout << "\n Не удалось, попробуйте еще раз.\n";
	} while (!data);
	data << "--------------------------------------------------------------\n"
		<< "|    |                                   |         | Возраст |\n"
		<< "| N  |              Название             | Стои-ть |----|----|\n"
		<< "|    |                                   |         | от | до |\n"
		<< "|----|-----------------------------------|---------|----|----|\n";
	for (int i = 0; i < n; i++) {
		data << "| " << setw(2) << left << i + 1 << " | " << setw(33) << toy[i].name << " | " << setw(7) << toy[i].cost << " | " << setw(2) << toy[i].age.from << " | " << setw(2) << toy[i].age.to << " |\n";
	}
	data << "--------------------------------------------------------------\n\n";
	data.close();
}
void masstr::printData2()
{
	cout << "  ---------------------------------------------------------------------\n"
		<< "  |     |                                      |           | Возраст  |\n"
		<< "  |  N  |               Название               | Стоимость |----|-----|\n"
		<< "  |     |                                      |           | от | до  |\n"
		<< "  |-----|--------------------------------------|-----------|----|-----|\n";
	for (int i = 0; i < m; i++) {
		cout << "  | " << setw(3) << left << i + 1 << " | " << setw(36) << res[i].name << " | " << setw(9) << res[i].cost << " | " << setw(2) << res[i].age.from << " | " << setw(3) << res[i].age.to << " |\n";
	}
	cout << "  ---------------------------------------------------------------------\n\n";
}
void masstr::outputFile2()
{
	ofstream data;
	do {
		cout << "\n Введите имя файла, в котором хотите сохранить:  ";
		cin >> nameFile;
		data.open(nameFile);
		if (!data) cout << "\n Не удалось, попробуйте еще раз.\n";
	} while (!data);
	data << "--------------------------------------------------------------\n"
		<< "|    |                                   |         | Возраст |\n"
		<< "| N  |              Название             | Стои-ть |----|----|\n"
		<< "|    |                                   |         | от | до |\n"
		<< "|----|-----------------------------------|---------|----|----|\n";
	for (int i = 0; i < m; i++) {
		data << "| " << setw(2) << left << i + 1 << " | " << setw(33) << res[i].name << " | " << setw(7) << res[i].cost << " | " << setw(2) << res[i].age.from << " | " << setw(2) << res[i].age.to << " |\n";
	}
	data << "-------------------------------------------------------------\n\n";
	data.close();
}
void masstr::sortCost()
{
	toys bubble = {};
	int fl, nn = n;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++)
			if (toy[i].cost > toy[i + 1].cost) {
				bubble = toy[i];
				toy[i] = toy[i + 1];
				toy[i + 1] = bubble;
				fl = 1;
			}
	} while (fl == 1);
	cout << " Отлично, данные отсортированы\n";
}
void masstr::sortName()
{
	toys bubble = {};
	int fl, nn = m;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++) {
			if (res[i].name > res[i + 1].name) {
				bubble = res[i];
				res[i] = res[i + 1];
				res[i + 1] = bubble;
				fl = 1;
			}
			if (res[i].name == res[i + 1].name)
				if (res[i].age.from < res[i + 1].age.from) {
					bubble = res[i];
					res[i] = res[i + 1];
					res[i + 1] = bubble;
					fl = 1;
				}
		}
	} while (fl == 1);
	cout << " Отлично, данные отсортированы\n";
}
void masstr::sortName1()
{
	toys bubble = {};
	int fl, nn = m;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++)
			if (res[i].name > res[i + 1].name) {
				bubble = res[i];
				res[i] = res[i + 1];
				res[i + 1] = bubble;
				fl = 1;
			}
	} while (fl == 1);
	cout << " Отлично, данные отсортированы\n";
}
void masstr::madeList()
{
	int fl;
	p = 0;
	lst* x = new lst[50];
	for (int i = 0; i < n; i++)
	{
		fl = 0;
		for (int j = 0; j < p; j++)
			if ((x[j].age.to == toy[i].age.to) && (x[j].age.from == toy[i].age.from)) {
				x[j].nm++;
				fl = 1;
			}
		if (fl == 0) {
			x[p].age.to = toy[i].age.to;
			x[p].age.from = toy[i].age.from;
			x[p].nm = 1;
			p++;
		}
	}
	if (a != NULL) delete[]a;
	a = new lst[p];
	for (int r = 0; r < p; r++)
		a[r] = x[r];
	delete[]x;
	cout << "\n\n Отлично, был отобран перечень из " << p << " строк\n\n";
}
void masstr::printData3()
{
	cout << "  -------------------------\n"
		<< "  | Возраст  |            |\n"
		<< "  |----|-----| Количество |\n"
		<< "  | от | до  |            |\n"
		<< "  |----|-----|------------|\n";
	for (int i = 0; i < p; i++) {
		cout << "  | " << setw(2) << a[i].age.from << " | " << setw(3) << a[i].age.to << " | " << setw(10) << a[i].nm << " |\n";
	}
	cout << "  -------------------------\n\n";
}
void masstr::outputFile3()
{
	ofstream data;
	string nameFile1;
	do {
		cout << "\n\n Введите имя файла, или, если хотите сохранить в другой папке, полный путь к нему:  ";
		cin >> nameFile1;
		data.open(nameFile1);
		if (!data) cout << "\n Что-то пошло не так, попробуйте еще раз.\n";
	} while (!data);
	data << "  -------------------------\n"
		<< "  | Возраст  |            |\n"
		<< "  |----|-----| Количество |\n"
		<< "  | от | до  |            |\n"
		<< "  |----|-----|------------|\n";
	for (int i = 0; i < p; i++) {
		data << "  | " << setw(2) << a[i].age.from << " | " << setw(3) << a[i].age.to << " | " << setw(10) << a[i].nm << " |\n";
	}
	data << "  -------------------------\n\n";
	data.close();
	cout << "\n Отлично, данные были сохранены\n";
}
void masstr::sortList1()
{
	lst bubble = {};
	int fl, nn = p;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++) {
			if (a[i].age.from > a[i + 1].age.from) {
				bubble = a[i];
				a[i] = a[i + 1];
				a[i + 1] = bubble;
				fl = 1;
			}
			if (a[i].age.from == a[i + 1].age.from)
				if (a[i].age.to < a[i + 1].age.to) {
					bubble = a[i];
					a[i] = a[i + 1];
					a[i + 1] = bubble;
					fl = 1;
				}
		}
	} while (fl == 1);
	cout << " Отлично, данные отсортированы\n";
}
void masstr::sortList2()
{
	lst bubble = {};
	int fl, nn = p;
	do {
		fl = 0; nn--;
		for (int i = 0; i < nn; i++)
			if (a[i].nm > a[i + 1].nm) {
				bubble = a[i];
				a[i] = a[i + 1];
				a[i + 1] = bubble;
				fl = 1;
			}
	} while (fl == 1);
	cout << " Отлично, данные отсортированы\n";
}

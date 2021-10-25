#include <iostream>
void task1();
void task2();
void task3();
void task4();
void task5();
int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}
void task1() {
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double a, b, S, P;
	cout << " Введите а , b" << endl;
	cin >> a >> b;
	cout << "a=" << a << "\nb=" << b << endl;
	S = a * b;
	P = 2 * (a + b);
	cout << "S=" << S << "\nP=" << P << endl;
}
void task2() {
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double L, П, d;
	П = 3.14;
	cout << " Введите d" << endl;
	cin >> d;
	cout << "d=" << d << endl;
	L = П * d;
	cout << "L=" << L << endl;

}
void task3() {
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double a, b, ar;
	cout << " Введите а , b" << endl;
	cin >> a >> b;
	cout << "a=" << a << "\nb=" << b << endl;
	ar = (a + b) / 2;
	cout << "ar=" << ar << endl;

}
void task4() {
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double r, z;
	cout << " Введите r , z";
	cin >> r >> z;
	if ((r == 0) || (z == 0)) {
		cout << "Пожалуйста,Введите ненулевые числа";


	}
	else {
		cout << " Сумма квадратов r , z=" << pow(r, 2) + pow(z, 2) << endl;
		cout << " Расность квадратов r , z=" << pow(r, 2) - pow(z, 2) << endl;
		cout << " Произведение квадаратов r , z=" << pow(r, 2) * pow(z, 2) << endl;
		cout << " Частное квадратов r , z=" << pow(r, 2) / pow(z, 2) << endl;
	}
}

void task5() {
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double r, z;
	cout << " Введите r, z";
	cin >> r >> z;
	if ((r == 0) || (z == 0)) {
		cout << "Пожалуйста,Введите ненулевые числа";



	}
	else {
		cout << " Сумма модулей r , z=" << abs(r) + abs(z) << endl;
		cout << " Разность модулей r , z=" << abs(r) - abs(z) << endl;
		cout << " Произведение модулей r , z=" << abs(r) * abs(z) << endl;
		cout << " Частное модулей r , z=" << abs(r) / abs(z) << endl;
	}



}

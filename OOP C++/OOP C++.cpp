#include <iostream>
#include <math.h>
using namespace std;
class Drobi
{
	int chisl_a;
	int chisl_b;
	int znamen_c;
	int znamen_d;
	int otvet_1;
	int otvet_2;
	int otvet_3;
	char operation;
public: 
	static int drobiCount;
	int operations()
	{
		cout << endl;
		otvet_1 = chisl_a * znamen_d + znamen_c * chisl_b;
		otvet_2 = chisl_b * znamen_d;
		otvet_3 = otvet_1 / otvet_2;
		cout << "▼Сумма▼" << endl;
		cout << otvet_1 << "/" << otvet_2 << endl;
		cout << otvet_3 << endl;
		cout << endl;
		otvet_1 = chisl_a * znamen_d - znamen_c * chisl_b;
		otvet_2 = chisl_b * znamen_d;
		otvet_3 = otvet_1 / otvet_2;
		cout << "▼Разность▼" << endl;
		cout << otvet_1 << "/" << otvet_2 << endl;
		cout << otvet_3 << endl;
		cout << endl;
		otvet_1 = chisl_a * znamen_d;
		otvet_2 = chisl_b * znamen_c;
		otvet_3 = otvet_1 / otvet_2;
		cout << "▼Деление▼" << endl;
		cout << otvet_1 << "/" << otvet_2 << endl;
		cout << otvet_3 << endl;
		cout << endl;
		otvet_1 = chisl_a * znamen_c;
		otvet_2 = chisl_b * znamen_d;
		otvet_3 = otvet_1 / otvet_2;
		cout << "▼Произведение▼" << endl;
		cout << otvet_1 << "/" << otvet_2 << endl;
		cout << otvet_3 << endl;
		
		return 0;
	}

	void Vopros()
	{
		cout << "Введите первую дробь: "; cin >> chisl_a;
		cout << "Введите вторую дробь: "; cin >> chisl_b;
		cout << "Введите первую дробь: "; cin >> znamen_c;
		cout << "Введите вторую дробь: "; cin >> znamen_d;
	}
	~Drobi() {
		drobiCount--;
		cout << "Значения успешно удалены" << endl;
	}
};
int Drobi::drobiCount{ 0 };
int main()
{
	setlocale(LC_ALL, "");
	// a / b + c / d = (a * d + b * c) / (b * d)
	
	Drobi dr;
	dr.Vopros();
	dr.operations();

	return 0;
}
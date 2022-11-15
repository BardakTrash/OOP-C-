#include <iostream>
using namespace std;
int a, b, c, d;
class Drobi 
{
public:
	int chisl_1;
	int chisl_2;
	int znamen_1;
	int znamen_2;
	int otvet;
	int znamen;
	int chisl;
	void input(int a,int b,int c,int d)
	{
		chisl_1 = a;
		chisl_2 = b;
		znamen_1 = c;
		znamen_2 = d;
		znamen;
		chisl;
		}
	int Operation(int chisl_1,int chisl_2,int znamen_1,int znamen_2,int otvet,int znamen,int chisl)
	{
		//a/d - c/b = (a*d-c*b)/(b*d)
		(chisl_1 * znamen_2 - znamen_1 * chisl_2) / (chisl_2 * znamen_2);
		chisl = (chisl_1 * chisl_2) - (znamen_1 * znamen_2);
		znamen = chisl_2 * znamen_2;
		cout << "Отнятая Дробь:  " << chisl << '/' << znamen << endl;
		//a/d * c/b = (a*d-c*b)/(b*d)
		(chisl_1 * znamen_2 * znamen_1 * chisl_2) / (chisl_2 * znamen_2);
		chisl = (chisl_1 * chisl_2) - (znamen_1 * znamen_2);
		znamen = chisl_2 * znamen_2;
		cout << "Умноженная Дробь:  " << chisl << '/' << znamen << endl;
		//a/d / c/b = (a*d-c*b)/(b*d)
		(chisl_1 * znamen_2 / znamen_1 * chisl_2) / (chisl_2 * znamen_2);
		chisl = (chisl_1 * chisl_2) - (znamen_1 * znamen_2);
		znamen = chisl_2 * znamen_2;
		cout << "Разделенная Дробь:  " << chisl << '/' << znamen << endl;
		//a/b + c/d = (a*b+c*d)/(b*d)
		(chisl_1 + chisl_2 + znamen_1 + znamen_2) / (chisl_2 * znamen_2);
		chisl = (chisl_1 * chisl_2) - (znamen_1 * znamen_2);
		znamen = chisl_2 * znamen_2;
		cout << "Прибавленная Дробь:  " << chisl << '/' << znamen << endl;
	}


};

int main() 
{
	setlocale(LC_ALL, "");
	int a, b, c, d;
	cout << "Введите первую дробь:";cin >> a,b;
	cout << "Введите вторую дробь:"; cin >> c,d;
	Drobi operat;
	operat.input(int a,int b,int c,int d);
	
}
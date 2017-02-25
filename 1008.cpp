#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int num,horas;
	double salario, salarioHora;

	cin >> num;
	cin >> horas;
	cin >> salario;

	salarioHora = (salario * horas);

	cout << fixed << setprecision(2);
	cout << "NUMBER = " << num << endl;
	cout << "SALARY = U$ " << salarioHora << endl;

	return 0;

}
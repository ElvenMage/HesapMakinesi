#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	double sayi1, sayi2;
	char islem;
	cout << "Toplama ��lemi ��in '+' Kullan�n�z \n��karma ��lemi ��in '-' Kullan�n�z \nB�lme ��lemi ��in '/' Kullan�n�z \n�arpma ��lemi ��in '*' Kullan�n�z \n \n";
	while (true) {
		cout << "�lk Say�n�z� Giriniz : ";
		cin >> sayi1;
		cout << "�kinci Say�n�z� Giriniz : ";
		cin >> sayi2;
		cout << "��leminizi Giriniz : ";
		cin >> islem;
		switch (islem) {
		case'+':
			cout << "Sonu� = " << sayi1 + sayi2 << endl;
			break;
		case'-':
			cout << "Sonu� = " << sayi1 - sayi2 << endl;
			break;
		case'*':
			cout << "Sonu� = " << sayi1 * sayi2 << endl;
			break;
		case'/':
			cout << "Sonu� = " << sayi1 / sayi2 << endl;
			break;
		default:
			cout << "Ge�ersiz ��lem! " << endl;
		}
	}
}
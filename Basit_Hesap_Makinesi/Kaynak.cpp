#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	double sayi1, sayi2;
	char islem;
	cout << "Toplama Ýþlemi Ýçin '+' Kullanýnýz \nÇýkarma Ýþlemi Ýçin '-' Kullanýnýz \nBölme Ýþlemi Ýçin '/' Kullanýnýz \nÇarpma Ýþlemi Ýçin '*' Kullanýnýz \n \n";
	while (true) {
		cout << "Ýlk Sayýnýzý Giriniz : ";
		cin >> sayi1;
		cout << "Ýkinci Sayýnýzý Giriniz : ";
		cin >> sayi2;
		cout << "Ýþleminizi Giriniz : ";
		cin >> islem;
		switch (islem) {
		case'+':
			cout << "Sonuç = " << sayi1 + sayi2 << endl;
			break;
		case'-':
			cout << "Sonuç = " << sayi1 - sayi2 << endl;
			break;
		case'*':
			cout << "Sonuç = " << sayi1 * sayi2 << endl;
			break;
		case'/':
			cout << "Sonuç = " << sayi1 / sayi2 << endl;
			break;
		default:
			cout << "Geçersiz Ýþlem! " << endl;
		}
	}
}
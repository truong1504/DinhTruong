#include <iostream>
using namespace std;

void kiemtra(double h, double m, double s){
	cout << endl << endl;
	cout << "DEM NGUOC VE 0h00 " << endl << endl << endl;
	if (23-h==0 && s!=0){
		cout << "Thoi gian con lai: " << 59 - m << "Phut " << 60-s << "Giay";
	}
	if (23-h==0 && s==0){
		cout << "Thoi gian con lai: " << 60 - m <<"Phut " << "0Giay";
	}
	if (23-h>0 && m==0 && s==0){
		cout << "Thoi gian con lai: " << 24-h << "Gio 0Phut 0Giay";
	}
	if (23-h>0 && m!=0 && s!=0){
		cout << "Thoi gian con lai: " << 23-h << "Gio " << 59-m << "Phut " << 60-s << "Giay";
	}
	if (23-h>0 && m!=0 && s==0){
		cout << "Thoi gian con lai: " << 23-h << "Gio " << 60-m << "Phut 0Giay";
	}
	if (23-h>0 && m==0 && s!=0){
		cout << "Thoi gian con lai: " << 23-h << "Gio " << 59-m << "Phut " << 60-s << "Giay";
	}
}

int main(){
	double h, m, s;
	cout << "Gio: "; cin >> h;
	cout << "Phut: "; cin >> m;
	cout << "Giay: "; cin >> s;
	while(h<0 || h>23){
		cout << "Gio khong hop le, moi nhap lai gio: ";
		cin >> h;
	}
	while (m>59 || m<0){
		cout << "Phut khong hop le, moi nhap lai phut: ";
		cin >> m;
	}
	while (s>59 || s<0){
		cout << "Giay khong hop le, moi nhap lai giay: ";
		cin >> s;
	}
	kiemtra(h, m, s);
	cout << endl << endl;
}

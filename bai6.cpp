#include <iostream>
using namespace std;

int main(){
	cout << endl << endl << "Bang tien luong nguoi lao dong trong 1 tuan : " << endl << endl;
	double gio;
	cout << "So gio lao dong 1 tuan: ";
	cin >> gio;
	cout << "So con nguoi lao dong: ";
	int con;
	cin >> con;
	cout << endl;
	if (gio <= 37.5){
		if (con < 3){
			double luong = gio*16.78;
			cout << "Tien luong ban dau: " << luong << endl << endl;
			cout << "THUE: " <<endl;
			cout << "Bao hiem XH: " << luong*0.05 << endl;
			cout << "Thue thu nhap: " << luong*0.12 <<endl;
			cout << "Thue cong doan: " << 10 << endl << endl;
			cout << "Tien Luong con lai: " << luong*0.87-10;
		}
		if (con >= 3){
			double luong = gio*16.78;
			cout << "Tien luong ban dau: " << luong << endl << endl;
			cout << "THUE: " <<endl;
			cout << "Bao hiem XH: " << luong*0.05 << endl;
			cout << "Thue thu nhap: " << luong*0.12 <<endl;
			cout << "Thue cong doan: " << 10 << endl << endl;
			cout << "Do co 3 con tro len nen chiu them phi bao hiem suc khoe: " << 35 << endl << endl;
			cout << "Tien Luong con lai: " << luong*0.87-10-35;
		}
	}
	if (gio > 37.5){
		if (con < 3){
			double luong = gio*16.78 + (gio-37.5)*0.5*16.78;
			cout << "Tien luong ban dau: " << luong << endl << endl;
			cout << "THUE: " <<endl;
			cout << "Bao hiem XH: " << luong*0.05 << endl;
			cout << "Thue thu nhap: " << luong*0.12 <<endl;
			cout << "Thue cong doan: " << 10 << endl << endl;
			cout << "Tien Luong con lai: " << luong*0.87-10;
		}
		if (con >= 3){
			double luong = gio*16.78;
			cout << "Tien luong ban dau: " << luong << endl << endl;
			cout << "THUE: " <<endl;
			cout << "Bao hiem XH: " << luong*0.05 << endl;
			cout << "Thue thu nhap: " << luong*0.12 <<endl;
			cout << "Thue cong doan: " << 10 << endl << endl;
			cout << "Do co 3 con tro len nen chiu them phi bao hiem suc khoe: " << 35 << endl << endl;
			cout << "Tien Luong con lai: " << luong*0.87-10-35;
		}
	}
}

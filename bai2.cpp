#include <iostream>
#include <cmath>
using namespace std;

void nghiem(int a, int b, int c){
	int k = b*b - 4*a*c;
	if (k>0){
		cout << (-b-sqrt(k))/a*2 << " " << (-b-sqrt(k)/a*2);
	}
	if (k==0){
		cout << -b/(2*a);
	}
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (b*b-4*a*c > 0) cout << "Phuong trinh co 2 nghiem la: ";
	else if (b*b-a*c*4 == 0) cout << "Phuong trinh co nghiem kep la: ";
	else cout << "Phuong trinh vo nghiem";
	nghiem(a, b, c);
}

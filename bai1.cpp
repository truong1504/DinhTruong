#include <iostream>
using namespace std;

int main(){
	char n;
	cin >> n;
	if (n<='Z' && n>='A'){
		n = n - 'A' + 'a';
		cout << n;
	}
	else if(n>='a' && n<='z'){
		n = n - 'a' + 'A';
		cout << n;
	}
	else{
		cout << n;
	}
}

#include <iostream>

using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int x,y,z;

	if(a<=b and a<=c){
		x = a;
	}else if(b<=c and b<=a) {
		x = b;
	}else {
		x = c;
	}

	if(x == a and b >= c){
		y = c;
		z = b;
	}else if( x == a and b <= c){
		y = b; z = c;
	}else if(x == b and a >= c){
		y = c;
		z = a;
	}else if(x == b and c >= a){
		y = a;
		z = c;
	}else if(x==c and a >= b){
		y = b;
		z = a;
	}else if(x == c and a<=b){
		y = a;
		z = b;
	}
	cout << x << endl << y << endl << z << endl;
	cout << endl << a << endl << b << endl << c << endl;
}
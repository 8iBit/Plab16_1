#include <iostream>
using namespace std;

int main(){
	int a = 5;
	string b = "A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int *z = &*x;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z;

	cout << "\n" << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z;

	c="F";
	cout << "\n" << a << " " << b << " " << c << " " << x << " " << y << " " << z;

	*y="W";
	cout << "\n" << a << " " << b << " " << c << " " << x << " " << y << " " << z;

	*x=6;
	cout << "\n" << a << " " << b << " " << c << " " << x << " " << y << " " << z;

	*z=7;
	cout << "\n" << a << " " << b << " " << c << " " << x << " " << y << " " << z;
	return 0;
}

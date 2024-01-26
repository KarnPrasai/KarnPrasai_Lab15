#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	char b = 'A';
	char &c = b;
	int *xPtr = &a;
	char *yPtr = &b;
	int **zPtr = &xPtr;

	cout << a <<" "<< b <<" "<<c<<" "<<xPtr<<" "<<&yPtr<<" "<<zPtr<<"\n";
	c = 'F';
	cout << &a <<" "<< &b <<" "<< &c <<" "<< &xPtr <<" "<<&yPtr<<" "<<&zPtr<<"\n";
	*yPtr = 'W';
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<zPtr<<"\n";
	*xPtr = 6;
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<zPtr<<"\n";
	**zPtr = 7;
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<zPtr<<"\n";
	return 0;
}

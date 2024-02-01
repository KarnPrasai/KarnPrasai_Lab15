#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	char b = 'A';
	char &c = b;
	int *xPtr = &a;
	char *yPtr = &b;
	void *zPtr = xPtr;

	cout << a <<" "<< b <<" "<<c<<" "<<xPtr<<" "<<&yPtr<<" "<<static_cast<int*>(zPtr)<<"\n";
	cout << &a <<" "<< static_cast<void*>(&b) <<" "<< static_cast<void*>(&c) <<" "<< static_cast<void*>(&xPtr) <<" "<<static_cast<void*>(&yPtr)<<" "<< zPtr <<"\n";
	c = 'F';
	cout << a <<" "<< b <<" "<<c<<" "<<xPtr<<" "<<&yPtr<<" "<<static_cast<int*>(zPtr)<<"\n";
	*yPtr = 'W';
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<static_cast<int*>(zPtr)<<"\n";
	*xPtr = 6;
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<static_cast<int*>(zPtr)<<"\n";
	*static_cast<int*>(zPtr) = 7;
	cout << a <<" "<< b <<" "<< c <<" "<< xPtr <<" "<<&yPtr<<" "<<static_cast<int*>(zPtr)<<"\n";
	return 0;
	
}
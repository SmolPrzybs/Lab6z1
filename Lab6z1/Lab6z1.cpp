#include <iostream> 
using namespace std;
int main() {

	int* ptr, * ptr1, * ptr2, a = 1342, b = 233, c = 2;
	ptr = &a; 
	ptr1 = &b;
	ptr2 = &c;
	cout << "roznica: " << (*ptr) - (*ptr1) << endl;
	cout << "srednia: " << (double)((*ptr) + (*ptr1) + (*ptr2)) / 3 << endl; 
	cout << "adres: " << ptr << endl; 
	cout << "wartosc: " << *ptr << endl;
}
#include <iostream>

using namespace std;

int main () {
	int i1 = {1};
	cout << "Char " << sizeof(char) <<'\n';
	cout << "short " << sizeof(short) << '\n';
	cout << "int " << sizeof(int) << '\n';
	cout << "long " << sizeof(long) << '\n';
	cout << "float " << sizeof(float) << '\n';
	cout << "Double " << sizeof(double) << '\n';
	cout << "Value of i1 " << i1 <<'\n';
	double d = {0.1};
	cout << "Value of d " << d <<'\n';
	constexpr double s1 {1.2};
	auto i = 123;
	cout << "Value of i " << i <<'\n';
	return 0;

}


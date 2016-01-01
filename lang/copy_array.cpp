#include <iostream>

using namespace std;


void increment_vec() {
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	for (auto &x : v)
		x++;
	cout << "values of increment_vec ";
	for (auto x: v)
		cout << x << ' ';
	cout <<'\n';
}

int main(int argc, char *argv[])
{
	int v1[] {-1,1,2,3,4,5,6,7,8,9};
	int v2[10];

	for (auto i=0; i<=10; i++)
		v2[i] = v1[i];
	for (auto i:v2) 
		cout << i << ' ' ;
	cout << '\n';
	increment_vec();
	cout << (nullptr==0) << '\n';
	return 0;
}

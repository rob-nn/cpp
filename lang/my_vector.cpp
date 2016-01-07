#include <iostream>

using namespace std;

struct Vec {
	int sz;
	double * elem;
};

void vector_init(Vec &v, int s) {
	v.elem = new double[s];
	v.sz = s;
}

int main(int argc, char *argv[])
{
	Vec v; 
	vector_init(v, 10);

	cout << "Size " << v.sz << '\n';

	for (auto i = 0; i < v.sz; i++) 
		cout << v.elem[i] << '\n';

	cout << '\n';	

	return 0;
}

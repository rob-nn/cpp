#include <iostream>

using namespace std;

class Vector {
	public:
		Vector(int size):elements{new double[size]}, sz{size}{}
		double& operator[](int i){return elements[i];}
		int size(){return sz;}
	private:
		int sz;
		double * elements;
};

int main(int argc, char *argv[])
{
	Vector v(3);

	cout<<"Iform 3 doubles: ";
	for (auto i = 0; i < v.size(); i++) 
		cin >> v[i];	

	double sum = 0;
	for (auto i = 0; i < v.size();i++)
		sum += v[i];
	
	cout<<"The sum is " << sum <<"\n";

	return 0;
}

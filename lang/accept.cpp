#include <iostream>

using namespace std;

bool accept() {
	cout << "Do you want to proceed? (y)es or (n)o:\n";
	char in = 0;
	cin >> in;
	switch (in) {
		case 'y': 
			return true;
		case 'n':
			return false;
		default:
			cout << "I will take this lika a no!\n";
			return false;
	}
}

int main(int argc, char *argv[])
{
	while (!accept());
	cout<<"End\n";

	return 0;
}

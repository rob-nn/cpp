#include<iostream>

using namespace std;

int count(char * str, const char c){
	char * p = str;
	int value {0};

	if (p == nullptr)
		return value;

	for (;  *p != 0; p++) {
		if (*p==c)
			value++;
	}
	return value;
}

int main(int argc, char *argv[])
{
	char str[255];
	char c;
	cout << "Informe uma string: ";
	cin >> str;
	cout << "Informe um caracter: ";
	cin >> c;	
	cout << "Foram encontrados "<< count(str, c) << " ococrrências de " << c <<" na palavara " << str << '\n';
	return 0;
}

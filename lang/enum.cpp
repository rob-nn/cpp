#include <iostream>

using namespace std;

enum class Traffic_light {green, yellow, red};

Traffic_light& operator++(Traffic_light& t) {
	switch(t) {
		case Traffic_light::green:
			return t=Traffic_light::yellow;
		case Traffic_light::yellow:
			return t=Traffic_light::red;
		case Traffic_light::red:
			return t=Traffic_light::green;
	}
}

char * to_str(Traffic_light t) {
	switch (t) {
		case Traffic_light::green: return "green";
		case Traffic_light::yellow: return "yellow";
		case Traffic_light::red: return "red";
	}
	return "";
}


int main(int argc, char *argv[])
{
	Traffic_light tl = Traffic_light::red;
	for (auto i = 0; i < 10; i++) {
		cout << to_str(tl) << '\n';
		++tl;
	}
	return 0;
}

/*#include <iostream>
#include <string>

using namespace std;

string Erase(string s) {
	int a = 0;
	do {
		size_t pos = s.find("(", 0);
		size_t pos2 = s.find(")", 0);
		size_t len = pos2 - pos;
		if (s.rfind("(", pos2) == pos) {
			s.erase(pos, len + 1);
		}
		else {
			return "Error";
		}
		a = pos+1;
	} while (s.find("(", a) != -1);

	return s;
}

int main() {
	cout << "Enter a string:" << endl;
	string s;
	cin >> s;
	cout << endl;
	cout << "After erasing:" << endl;
	cout << Erase(s);

	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
using namespace std;
string Erase(string s) {
	int a = 0;
	do {
		size_t pos = s.find("(", 0);
		size_t pos2 = s.find(")", 0);
		size_t len = pos2 - pos;
		if (s.rfind("(", pos2) == pos) {
			s.erase(pos, len + 1);
		}
		else {
			return "Error";
		}
		a = pos + 1;
	} while (s.find("(", a) != -1);

	return s;
}

string Read(string path) {
	string s;
	getline(ifstream(path), s, '\0');
	return s;
}

void Edit(string filename) {
	string fileContent = Read(filename);

	string result = Erase(fileContent);

	fstream f(filename, ios_base::out);

	if (f.is_open()) {
		f << result;
		f.close();
	}
}


int main()
{
	string file = "1.txt";
	Edit(file);
	return 0;

}

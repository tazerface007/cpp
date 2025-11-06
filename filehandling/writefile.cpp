#include<iostream>
#include<fstream>

using namespace std;

void write() {
	ofstream os("file.txt", std::ios::out);
	cout << "File Handling in C++" << endl;
	os << "Hello How are you?" << endl;
	os << "Hope you are doing well!" << endl;
	os.close();
}

void append() {
	ofstream os("file.txt", std::ios::app);
	cout << "File Handling in C++" << endl;
	os << "Hello How are you?" << endl;
	os << "Hope you are doing well!" << endl;
	os.close();
}



int main() {
	append();
	return 0;
}

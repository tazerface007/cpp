#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream is("hello.txt");
	std::string line;
	while(std::getline(is, line)){
		cout << line << endl;
	}
	is.close();
	return 0;
}

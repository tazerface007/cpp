#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char *argv[]) {
	if(argc < 2) {
		cerr << "File name as argument required!" << endl;
		return -1;
	}
	ifstream is(argv[1]);
	std::string line;
	while(std::getline(is, line)){
		cout << line << endl;
	}
	is.close();
	return 0;
}

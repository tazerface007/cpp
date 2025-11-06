#include<iostream>
using namespace std;

class Student {
	private:
		int age;
		char bg;
	public:
		int getAge(){
			return age;
		}

		char getBloodGroup() {
			return bg;
		}

		void setAge(int age) {
			this->age = age;
		}

		void setBloodGroup(char bg) {
			this->bg = bg;
		}
};

int main() {
	Student s;
	s.setAge(25);
	s.setBloodGroup('A');
	cout << "Age: " << s.getAge() << endl;
	cout << "Blood Group: " << s.getBloodGroup() << endl;
	cout << s << endl;
	return 0;
}

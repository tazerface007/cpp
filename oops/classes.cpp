#include<iostream>
#include<string>

using namespace std;
class Student {
        public:
                string name = "Deepak";
};

int main() {
        Student s;
        cout << s.name << endl;
        return 0;
}

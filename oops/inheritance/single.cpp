#include<iostream>
#include<string>

using namespace std;
class Base{
        private:
                int num1;
        public:
                void setNum1(int num1) {
                        this->num1 = num1;
                }

                int getNum1(){
                        return this->num1;
                }
};

class Derived :  private Base {
        public:
                int num2;
        Derived() {
                this->setNum1(12);
        }
        int getVal() {
                return this->getNum1();
        }
};

int main() {
        Derived d1;
        cout << "num1: " << d1.getVal() << endl;
        return 0;
}

#include<iostream>

using namespace std;


int main() {
        short vshort = 32767;
        unsigned short ushort = 65534;
        int vint = 213738453;
        unsigned int uint = 42282738;
        long vlong = 982349823742L;
        unsigned long ulong = 89723942342UL;
        long long int llong = 9827349872342LL;
        unsigned long long ullong = 928374923842323ULL;
        char vchar = 'A';
        unsigned char uchar = '1';
        float vfloat = 2.2f;
        double vdouble = 3.2F;
        long double udouble = 2.2F;
        struct node {
                int data;
                struct node *next;
        };
        struct node n1 =  {
                .data = 23,
                .next = NULL
        };



        // Print statements
        cout << "Datatypes in C++" << endl;
        cout << "short: " << vshort << endl;
        cout << "unsigned short: " << ushort << endl;
        cout << "int: " << vint << endl;
        cout << "unsigned int: " << uint << endl;
        cout << "long: " << vlong << endl;
        cout << "unsigned long: " << ulong << endl;
        cout << "long long: " << llong << endl;
        cout << "unsigned long long: " << ullong << endl;
        cout << "char: " << vchar << endl;
        cout << "unsigned char: " << uchar << endl;
        cout << "float: " << vfloat << endl;
        cout << "double: " << vdouble  << endl;
        cout << "long double: " << udouble  << endl;
        cout << "struct node.data: " << n1.data << endl;
        return 0;
}

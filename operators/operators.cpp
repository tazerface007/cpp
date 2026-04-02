#include<iostream>

using std::cout;
using std::endl;

void ArithmeticOperators(){
	printf("Arithmetic Operators""\n");
	int a = 2, b = 1;
	printf("Initial Values of a: %d & b: %d""\n", a, b);
	printf("a+b: %d""\n", (a+b));
	printf("a-b: %d""\n", (a-b));
	printf("a*b: %d""\n", (a*b));
	printf("a/b: %d""\n", (a/b));
	printf("a/b: %d""\n", (a/b));
	printf("a%%b: %d""\n", (a%b));
}

void LogicalOperators(){
	printf("Logical Operators""\n");
	int a = 2, b = 1;
	printf("Initial Values of a: %d & b: %d""\n", a, b);
	printf("a<b || b>a: %d""\n", ((a<b)|| (b>a)));
	printf("a<b && b>a: %d""\n", ((a<b)&& (b>a)));
	printf("!(b<a): %d""\n", !(b<a));
}

void BitwiseOperators(){
	printf("Bitwise Operators""\n");
	int a = 2, b = 1;
	printf("Initial Values of a: %d & b: %d""\n", a, b);
	printf("a&b: %d""\n", (a&b));
	printf("a|b: %d""\n", (a|b));
	printf("a^b: %d""\n", (a^b));
}

void ComparisonOperators(){
	printf("Comparison Operators""\n");
	int a = 2, b = 1;
	printf("Initial Values of a: %d & b: %d""\n", a, b);
	printf("a<b: %d""\n", (a<b));
	printf("a>b: %d""\n", (a>b));
	printf("a>=b: %d""\n", (a>=b));
	printf("a<=b: %d""\n", (a<=b));
	printf("a==b: %d""\n", (a==b));
	printf("a!=b: %d""\n", (a!=b));
}

int main() {
	ArithmeticOperators();
	LogicalOperators();
	BitwiseOperators();
	ComparisonOperators();
	return 0;
}

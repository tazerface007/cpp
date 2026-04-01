#include<iostream>

class Box {
	private:
		double width;

	public:
		Box(double w) : width(w) {}
	
		friend void printWidth(Box b);
};


void printWidth(Box b) {
	std::cout << "Width of box: " << b.width << std::endl;
}

int main() {
	Box box(10.5);
	printWidth(box);
	return 0;
}

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main() {
	list<int> num;
	num.sort();
	num.push_back(10);
	num.push_front(5);
	auto it = num.begin();
	advance(it, 2);
	num.insert(it, 20);
	for (int i:num) {
		cout << i << " ";

	}
	return 0;
}

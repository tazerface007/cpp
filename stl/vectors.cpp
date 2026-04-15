#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> v = {5,3,4,99,12,1,3};
	sort(v.begin(), v.end());
	for(int x: v) {
		cout << x << " ";
	}
	return 0;
}

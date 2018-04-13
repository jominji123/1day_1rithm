#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

void main() {
	vector<int> a;
	int b = 0;
	for (int i = 0; i < 10; i++) {
		cin >> b;
		a.push_back(b);
	}

	sort(a.begin(), a.end(),greater<int>() );

	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
}
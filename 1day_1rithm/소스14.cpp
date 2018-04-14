#include <iostream>
using namespace std;


int n;
int k;

int compute_factorial(int n) {
	int factorial = 1;
	for (; n > 1; --n)
		factorial *= n;
	//cout << factorial<<'\n';
	return factorial;
}

int main() {
	int one=0, two=0, three=0,result=0;
	cin >> n;
	cin >> k;

	one = compute_factorial(n);
	two = compute_factorial(k);
	three = compute_factorial(n - k);

	result = one/(two* three);
	cout << result;

	
}
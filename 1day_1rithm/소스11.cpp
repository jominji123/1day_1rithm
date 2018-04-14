#include <stack>
#include <iostream>
#include <vector>
using namespace std;

int n;
int i;

int main() {
	stack<int> st;
	
	cin >> n;

	for (i = 1; i <= n; i++) {
		st.push(i);
		cout << "+" << endl;
		cout << "top value : " << st.top() << endl;

	}
	st.pop();
	//cout << "top value : " << st.top() << endl;
	cout << st.empty()<< endl;
	if (st.empty() == 1)
		st.top() = -1;
	cout << "top value : " << st.top() << endl;


}
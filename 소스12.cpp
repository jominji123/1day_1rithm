#include <queue>
#include <iostream>
using namespace std;

class Node {
public:
	int num;// document num
	int priority; // prio info

	Node(int n, int p) {
		num = n;
		priority = p;
	}
};

int n;
int i;
int j;
int dnum; //input documnet num 
int fnum; // input find documnet num
int input;
int tempn;
int tempp;
int result=0;


int main() {
	queue<Node> Q;
	priority_queue<int> Q2;

	cin >> n;

	for (j = 0; j < n; j++) {
		while (!Q.empty()) {
			Q.pop();
		}
		while (!Q2.empty()) {
			Q2.pop();
		}
		result = 0;

		cin >> dnum;
		cin >> fnum;
		for (i = 0; i < dnum; i++) {
			
			cin >> input;
			Q.push((Node)Node(i, input) );
			Q2.push(input);
			//cout << "Node num : " << i << "   Node priority : " << input << '\n';
		}

		while (!Q2.empty()) {
			if (Q2.top() == Q.front().priority) {
				//cout << "Q2, Q same ### Q2 : " << Q2.top() << "  Q : " << Q.front().priority << '\n';
				result++;
				if (Q.front().num == fnum) {
					//i went to find it
					//cout << "here?" << '\n';
					cout <<result<<'\n';
					break;

				}
				else {
					//cout << "pop pop ?" << '\n';
					Q2.pop();
					Q.pop();
				}
			}
			else {//again input 
				tempn = Q.front().num;
				tempp = Q.front().priority;
				Q.pop();
				Q.push((Node)Node(tempn, tempp));
				//cout << "again input num : " << Q.back().num << "  prio : "<< Q.back().priority<<'\n';

			}

		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {

	char ch = 'A';
	while (ch >= 'A' && ch <= 'Z') {
		cout << ch << "=" << (int) ch << '\n';
		ch++;
	}

	return 0;
}
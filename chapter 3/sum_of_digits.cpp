#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int sum = 0;

    int count = 0;
    while (n>0) {                 // equivalent condition while(n!=0)
    	int last_digit = n%10;
    	n = n/10;
    	sum = sum + last_digit;
    }
    cout << sum << "\n";

	return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n;
// 	cin >> n;
// 	int sum=0;

// 	for(int i=1 ;  ; i++) {  // remove i<=n condition for i>n issue
// 		int rem = n%10;
// 		n = n/10;        // n/=10;
// 		sum=sum+rem;     // sum+=rem;
// 		if(n==0) {
// 			break;
// 		}
// 	}
// 	cout << sum <<"\n";

// 	return 0;
// }
	
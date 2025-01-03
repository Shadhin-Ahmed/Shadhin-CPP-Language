// method 1 - 3 loops : merge two opposite triangle

// just change "*" == k  ~ reverse number triangle - must check
// just change "*" == (char)(k+64)  ~ reverse Alphabet traiangle - check
// just change k<=i == k<=n  ~ rhombhos - check

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	for(int i=1 ; i<=n ; i++) {   

		for(int j=n ; j>=i ; j--) {   //1st left-half triangle check with "#"
			cout << " "; 
		}
		  // here 1st loop ~  j=n ; j>=i ; j--  ==  j=1 ; j<=n-i+1 ; j++

		for(int k=1 ; k<=i ; k++) {   //2nd right half triangle with *
			cout << "*";
		} 

		cout <<"\n";
	}

	return 0;
}



// Method 2 : using if else alter star and space

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int m;
// 	cin >> m;

// 	for(int i=1 ; i<=m ; i++) {
// 		for(int j=m ; j>=1 ; j--) {
// 			if(i<j) {
// 				cout <<" ";
// 			} else{
// 				cout <<"*";
// 			}
// 		}
// 		cout <<"\n";
// 	}

// 	return 0;
// }



// Method 2

#include<bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m;
	cin >> n;
	for (int i=1 ; i<=m ; i++) {    
	    if(i%2==1) {
	    	for(int j=1 ; j<=i ; j++) {
	    		if(j%2==1) {
	    			cout << "1" << " ";
	    		} else{
	    			cout << "0" << " ";
	    		}
	    	}
	    }
	    else {
	        for(int k=1 ; k<=i ; k++) {
	    		if(k%2==1) {
	    			cout << "0" << " ";
	    		} else{
	    			cout << "1" << " ";
	    		}
	    	}
	    }
		cout << "\n";
	}
	return 0;
}


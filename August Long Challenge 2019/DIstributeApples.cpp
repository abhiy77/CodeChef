#include <iostream>
using namespace std;

int main() {
	long long int t,n,k;
	cin >> t;
	while(t > 0){
	    cin >> n >> k;
	    if(k==1){
	        cout << "NO" << endl;
	        t--;continue;
	    }
	    long long int total = n/k;
	    long long int count =0;
	    if(total < k){
	        cout << "YES" << endl;
	    }
	    else if(total == k){
	        cout << "NO" << endl;
	    }
        else{

            if(total%k == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        t--;
	}
	return 0;
}

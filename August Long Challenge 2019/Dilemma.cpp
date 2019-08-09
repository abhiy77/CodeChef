#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    string x;
	    cin >> x;
	    int count = 0;
	    for(int i=0;i<x.length();i++){
	        if(x[i] =='1'){
	            count++;
	        }
	    }
	    if(count%2==0){
	        cout << "LOSE" << endl;
	    }
	    else{
	        cout << "WIN" << endl;
	    }
	}
	return 0;
}

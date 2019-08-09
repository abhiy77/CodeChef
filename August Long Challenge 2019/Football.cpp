#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	   while(t>0){
	      cin >> n;
	       int arr1[n];
	       int arr2[n];
	       for(int i=0;i<n;i++){
	           cin >> arr1[i];
	       }
	       for(int i=0;i<n;i++){
	           cin >> arr2[i];
	       }
	       int max = 0;
	       for(int i=0;i<n;i++){
	           int x = arr1[i]*20 - arr2[i]*10;
	           if(x > max){
	               max = x;
	           }
	       }
	       cout << max << endl;
	       t--;
	   }
	return 0;
}

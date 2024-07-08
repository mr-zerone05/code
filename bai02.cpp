#include <iostream>
#include <math.h>
using namespace std;
 int main() {
 	int n, a[23],ans;
	 int test;
	cin >> n;
	
	for ( int i=0; i<n; i++) {
		cin >> a[i];
	}
	if(n%2==0) {
		test=(a[n/2]+a[n/2-1]);
		if(test%2==0){
			ans=test/2;
			cout<<ans;
		}
		else{
			cout<<test<<endl;
			cout<<"2";
		}
	} else if(n%2!=0) {
		cout<<a[n/2];
	}
	return 0;
 }

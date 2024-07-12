#include <bits/stdc++.h> 
using namespace std;
long long giaithua(int n){
	if(n==1){
		return 1;
	}
	else{
       return n*giaithua(n-1);
    }
}
int main() {
	long long n;
	cin>>n;
	cout<<giaithua(n);
	return 0;
}

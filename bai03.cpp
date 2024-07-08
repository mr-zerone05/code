#include <bits\stdc++.h>
using namespace std;
 void danhdau(int x[],int y[],int n){
 	for (int i=0;i<n;i++){
 		y[x[i]]++;
	 }
 }
int giaithua(int n){
	int kq=1;
	if(n==0 || n==1){
		return 1;
	} else{
		while(n>0){
			kq=kq*n;
			n--;
		}
	}
	return kq;
}
int main(){
	int n;
	cin >> n;
	int ans=giaithua(n);
	int x[23];
	int y[23]={0};
	for ( int i=0; i<n; i++) {
		cin >> x[i];
	}
	danhdau(x,y,n);
	for(int i=0;i<n;i++){
		if(y[i]>0){
			ans=ans/giaithua(y[i]);
		}
	}
	cout<<ans<<endl;
	
	return 0;
}


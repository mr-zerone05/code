#include <iostream>
using namespace std;
int a[20], tanxuat[50] = {0};
void mot(int n){
    for(int i = 0; i < n; i++){
        tanxuat[a[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < 50; i++){
        ans = max(tanxuat[i],ans);
    }
    for(int i = 0; i < n; i++){
        if(tanxuat[i] == ans){
            cout << i << endl;
        }
    }
}
void nhap(int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int main(){
    int n; cin >> n;
    nhap(n);
    mot(n);
    return 0;
}

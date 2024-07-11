#include <iostream>
using namespace std;
int n=8,dem=1;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int a[8][8];
void Print(){
    cout<<"Phuong an thu:  "<<dem<<":\n";
    cout<<"----------------------------------";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
void Move(int x,int y,int k){
    a[x][y]=k;
    if (k==n*n){
        Print();
        dem++;
       // return;
        //exit(0);
    }
    for(int i=0;i<n;i++){
        int u=x+dx[i],v=y+dy[i];
        if(u>=0&&u<n&&v>=0&&v<n&&a[u][v]==0)
            Move(u,v,k+1);
    }
    a[x][y]=0;
}
int main()
{
    Move(0,0,1);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
vector<int> factors(int n)
{  
    vector<int> v;
    v.push_back(1);

    for (int i = 2; i <= sqrt(n); i++) {
 
     
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i) {
                v.push_back(n / i);
            }
        }
    }
  
    return v;
}
bool checkAbundant(int n)
{
    vector<int> v;
    int sum = 0;
 
    v = factors(n);
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    if (sum > n)
        return true;
    else
        return false;
}
bool checkSemiPerfect(int n)
{
    vector<int> v;
    v = factors(n);
    sort(v.begin(), v.end());
    int r = v.size();
    bool subset[r + 1][n + 1];
    for (int i = 0; i <= r; i++)
        subset[i][0] = true;
    for (int i = 1; i <= n; i++)
        subset[0][i] = false;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < v[i - 1])
                subset[i][j] = subset[i - 1][j];
            else {
                subset[i][j] = subset[i - 1][j] || 
                               subset[i - 1][j - v[i - 1]];
            }
        }
    }
    if ((subset[r][n]) == 0)
        return false;
    else
        return true;
}
bool checkweird(int n)
{
    if (checkAbundant(n) == true && 
        checkSemiPerfect(n) == false)
        return true;
    else
        return false;
}
 
int main()
{  int n; 
    cin>>n; 
    if (checkweird(n))
        cout << "1";
    else
        cout << "0";
    return 0;
}

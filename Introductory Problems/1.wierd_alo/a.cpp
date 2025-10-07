//
// Created by main14 on 10/5/25.
//

# include <bits/stdc++.h>
using namespace std;
using ll = long long;
// # g++ a.cpp -a arun
int main()
{
    ll n; cin >> n;
    cout << n << " ";
    while (n > 1) {
        if (n%2==0) {
            n /= 2;
        }else {
            n = n*3 +1;
        }
        cout << n << " ";
    }
    return 0;
}
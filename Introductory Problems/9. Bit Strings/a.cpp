//
// Created by main14 on 10/7/25.
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#else
#define dbg(x)
#endif

void fast_io() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
int MOD = 1e9+7;
ll power(ll a, ll b) {
	if (b==0) return 1;
	if (b == 1) return a;
	if (b % 2 == 0) return power(a, b/2) % MOD * power(a, b/2) % MOD;
	else {
		return a * power(a, (b-1)/2) % MOD * power(a, (b-1)/2) % MOD;
	}
}
void solve() {
	int n;
	cin >> n;
	cout << power(2, n);
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

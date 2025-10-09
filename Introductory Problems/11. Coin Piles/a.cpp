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

void solve() {
	int x, y; cin >> x >> y;
// # sum must divisible for 3 and
	if ( (x+y)%3 == 0 && max(x, y) <= 2 * min(x, y)) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}

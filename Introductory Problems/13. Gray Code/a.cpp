//
// Created by main14 on 10/9/25.
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
	int n;
	cin >> n;
	int t = 1 << n;
	for (int i = 0;i<t;i++) {
		int g = i ^ (i >> 1);
		string s = "";
		for (int bit = n-1;bit>=0;bit--) {
			s+= ((g>>bit) & 1) ? '1':'0';
		}
		cout << s << endl;
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

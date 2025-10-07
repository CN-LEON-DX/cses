//
// Created by main14 on 10/6/25.
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
	int n, k;
	cin >> n >> k;
	multiset<int> se;
	for (int i=0;i<n;i++) {
		int t; cin >> t; se.insert(t);
	}
	while (k--) {
		int u; cin >> u;
		auto it = se.upper_bound(u);
		if (it != se.begin()) {
			--it;
			cout << *(it) << endl;
			se.erase(it);
		}else {
			cout << -1 << endl;
		}
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}
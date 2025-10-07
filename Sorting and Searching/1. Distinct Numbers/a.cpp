//
// Created by main14 on 10/5/25.
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
	set<int> a;
	int x;
	for (int i = 0;i<n;i++) {
		cin >> x;
		a.insert(x);
	}
	cout << a.size();
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}
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
	int row, col; cin >> row >> col;
	if (row == 1 && col == 1) {
		cout << 1 << endl;
		return;
	}
	ll mi = min(row, col);
	ll mx = max(row, col);
	ll min_round = 1ll * (mx - 1) * (mx - 1) + 1;
	ll max_round = 1ll * mx * mx;
	if (mx % 2 == 0) {
		if (row < col) {
			cout << min_round + row - 1 << endl;
		} else {
			cout << max_round - col + 1 << endl;
		}
	}else {
		if (row < col) {
			cout << max_round - row + 1 << endl;
		} else {
			cout << min_round + col - 1 << endl;
		}
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}
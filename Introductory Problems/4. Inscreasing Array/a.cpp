//
// Created by main14 on 10/5/25.
//
#define LOCAL
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
	vector<int> a(n);
	for (int &x: a) cin >> x;
	ll ans = 0;
	int top_val = a[0];
	for (int i = 1;i<n;i++) {
		int idx = i;
		while (top_val > a[idx] && idx < n) {
			ans += top_val - a[idx];
			//dbg("loop:");
			//dbg(ans);
			++idx;
		}
		if (idx == n) {
			break;
		}
		i = idx;
		top_val = a[idx];
	}

	cout << ans;
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

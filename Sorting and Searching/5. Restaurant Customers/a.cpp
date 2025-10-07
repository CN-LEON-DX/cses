//
// Created by main14 on 10/7/25.
////
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
	int n;
	cin >> n;
	vector<pair<int, int>> am;
	int m = 0;
	while (n--) {
		int x, y; cin >> x >> y;
		m = max(m, y);
		am.push_back({x, y});
	}
	vector<int> a(m+2, 0);
	for (int i = 0;i<am.size();i++) {
		int x = am[i].first;
		int y = am[i].second;
		a[x-1]+=1;
		a[y]-=1;
	}
	int cur = 0, ans = 0;
	for (int i=0;i<m;i++) {
		cur += a[i];
		ans = max(ans, cur);
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

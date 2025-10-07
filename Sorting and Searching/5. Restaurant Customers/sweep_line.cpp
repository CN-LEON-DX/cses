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
	int n;
	cin >> n;
	map<ll, ll> mp;
	while (n--) {
		ll x, y; cin >> x >> y;
		mp[x- 1] +=1;
		mp[y] -=1;
	}
	int ans = 0, cur = 0;
	for (auto p : mp) {
		cout << p.first << " " << p.second << endl;
		cur += p.second;
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

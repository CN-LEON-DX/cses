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
	for (int i = 1;i<=n;i++) {
		ll how_to_put_2_knight = 1ll*i*i*(i*i-1)/2;
		ll how_them_cat_attack = 4 * (i-2) * (i-1);
		cout << how_to_put_2_knight - how_them_cat_attack << endl;
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

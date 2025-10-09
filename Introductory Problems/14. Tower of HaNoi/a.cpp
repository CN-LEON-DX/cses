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

vector<pair<int, int>> mvs;
void hanoi(int n, int from, int to, int aux) {
	if (n==1) {
		mvs.push_back({from, to});
		return;
	}
	hanoi(n-1, from, aux, to);
	mvs.push_back({from, to});
	hanoi(n-1, aux, to, from);
}
void solve() {
	int n; cin >> n;
	hanoi(n, 1, 3, 2);
	cout << mvs.size() << endl;
	for (auto [x, y] : mvs) {
		cout << x << " " << y << endl;
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

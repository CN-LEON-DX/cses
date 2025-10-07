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
	int m, n, k; cin >> m >> n >> k;
	vector<int> a(m);
	vector<int> b(n);
	for (int &i : a) cin >> i;
	for (int &i : b) cin >> i;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	int ans = 0;
	while (i < m && j < n) {
		if (b[j] >= a[i] - k && b[j] <= a[i] + k) {
			++i; ++j;
			++ans;
			// cout << i << " " << j << endl;
		}else if (b[j] < a[i] - k) {
			++j;
		}else {
			++i;
		}
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

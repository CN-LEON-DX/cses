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
	int n, x; cin >> n >> x;
	vector<int> a(n);
	for (int &i : a) cin >> i;
	sort(a.begin(), a.end());
	int left = 0, right = n-1;
	int ans = 0;
	while (left <= right) {
		if (a[right] > x) ++ans;
		else if (a[right] + a[left] > x) {
			++ans;
			right--;
		} else {
			right--;
			left ++;
			++ans;
		}
		// cout << left << " " << right << endl;
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

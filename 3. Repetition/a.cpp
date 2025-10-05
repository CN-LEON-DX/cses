#include <bits/stdc++.h>
using namespace std;

#define int long long
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
	string s; cin >> s;
	char cur_char = s[0];
	int ans = 1, cnt = 1;
	for (int i = 1;i<s.size();i++) {
		if (s[i] == cur_char) {
			++cnt;
		}else {
			ans = max(ans, cnt);
			cur_char = s[i];
			cnt = 1;
		}
	}
	// the last char
	ans = max(ans, cnt);
	cout << ans;

}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

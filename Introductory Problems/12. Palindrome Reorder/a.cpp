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

void solve() {
	string s; cin >> s;
	int f[26] = {0};
	for (char i : s) f[i-'A']++;
	int cnt = 0;
	char ch = '\0';
	for (int i = 0;i<26;i++) {
		if (f[i]&1) {
			cnt++;
			ch = i+'A';
		}
		if (cnt>=2) break;
	}
	if (cnt >=2) {
		cout << "NO SOLUTION\n";
	}else {
		string ans = "";
		string re_ans = "";
		for (int i = 0;i<26;i++) {
			std::string rech(f[i]/2, i+'A');
			ans += rech;
			re_ans = rech + re_ans;
		}
		if (ch != '\0') {
			cout << ans << ch << re_ans << '\n';
		}else {
			cout << ans << re_ans << '\n';
		}
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}
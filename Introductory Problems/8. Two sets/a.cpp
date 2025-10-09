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
	ll s = 1ll*n*(n+1)/2;
	if (s %2==0) {
		cout << "YES" << endl;
		vector<int> a;
		vector<int> b;
		s/=2;
		for (int i =n;i>=1;i--) {
			if (s>0 && s-i>=0) {
				s-=i;
				a.push_back(i);
			}else {
				b.push_back(i);
			}
		}
		cout << a.size() << endl;
		for (int i : a) cout << i << ' ';
		cout << endl;
		cout << b.size() << endl;
		for (int i : b) cout << i << " ";
	}else {
		cout << "NO";
	}
}

int32_t main() {
	fast_io();
	int t = 1;
	// cin >> t;
	while (t--) solve();
	return 0;
}

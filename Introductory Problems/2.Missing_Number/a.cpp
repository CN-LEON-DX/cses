//
// Created by main14 on 10/5/25.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a;
	long long s = 1ll* (n + 1)*n/2;
	for (int i = 1;i<n;i++) {
		cin >> a;
		s-=a;
	}
	cout << s;
	return 0;
}
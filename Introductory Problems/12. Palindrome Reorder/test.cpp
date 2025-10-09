//
// Created by main14 on 10/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<int> freq(26, 0);
	for (char c : s) freq[c - 'A']++;

	int odd_count = 0;
	char mid_char = '\0';
	for (int i = 0; i < 26; i++) {
		if (freq[i] % 2 == 1) {
			odd_count++;
			mid_char = 'A' + i;
		}
	}

	if (odd_count > 1) {
		cout << "NO SOLUTION\n";
		return 0;
	}

	string left = "";
	for (int i = 0; i < 26; i++) {
		left.append(freq[i] / 2, 'A' + i);
	}

	string right = left;
	reverse(right.begin(), right.end());

	if (mid_char != '\0')
		cout << left << string(freq[mid_char - 'A'] % 2 == 1 ? 1 : 0, mid_char) << right << '\n';
	else
		cout << left << right << '\n';

	return 0;
}

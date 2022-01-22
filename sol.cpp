#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	char a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// the maximum length of consecutive sector with rocks in it should be less than k
	int best = INT_MIN;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == '#') {
			cnt++;
		} else {
			best = max(best, cnt);
			cnt = 0;
		}
	}
	best = max(best, cnt);
	cout << (best < k ? "YES" : "NO") << '\n';
	return 0;
}

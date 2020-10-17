#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int p1, p2, k;
		cin >> p1 >> p2 >> k;
		cout << ((p1 + p2) % (2 * k) < k ? "CHEF" : "COOK") << '\n';
	}
	return 0;
}

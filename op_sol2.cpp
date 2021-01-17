#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int days;
		cin >> days;
		// initialize the array with zero values
		int a[32] = {0};
		for (int i = 0; i < days; i++) {
			int d, p;
			cin >> d >> p;
			// store the problem on its corresponding day
			a[d] = p;
		}
		// accumulate the sum of the problems until the 31st day
		for (int i = 1; i < 32; i++) {
			a[i] += a[i - 1];
		}
		int q;
		cin >> q;
		for (int i = 0; i < q; i++) {
			int dead, req;
			cin >> dead >> req;
			// check if the problems that have been accumulated in that deadline is
			// greater than or equal to the required problems
			if (a[dead] >= req) {
				cout << "Go Camp";
			} else {
				cout << "Go Sleep";
			}
			cout << '\n';
		}
	}
	return 0;
}

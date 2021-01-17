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
		// create a vector for every day and its corresponding number of problems
		vector<pair<int, int>> v;
		for (int i = 0; i < days; i++) {
			int d, p;
			cin >> d >> p;
			v.push_back(make_pair(d, p));
		}
		int q;
		cin >> q;
		for (int i = 0; i < q; i++) {
			int dead, req;
			int total = 0;
			cin >> dead >> req;
			// run a loop until the days of training catch up in the current day
			// and get the total of the problem solved up until the deadline
			for (auto x : v) {
				if (x.first <= dead) {
					total += x.second;
				}
			}
			// check if the total problem solved is greater than or equal to the required
			if (total >= req) {
				cout << "Go Camp";
			} else {
				cout << "Go Sleep";
			}
			cout << '\n';
		}
	}
	return 0;
}

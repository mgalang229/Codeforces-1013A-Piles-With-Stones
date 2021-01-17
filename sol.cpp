#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int x_sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// calculate the sum of stones in piles for the 1st time
		x_sum += x;
	}
	int y_sum = 0;
	for (int i = 0; i < n; i++) {
		int y;
		cin >> y;
		// calculate the sum of stones in piles for the 2nd time
		y_sum += y;
	}
	// the answer would depend on the sum of the stones in piles for the 2nd time
	// the operations of the jury is either nothing or subtraction
	// so it's impossible for the stones in piles for the 2nd time to increase its value
	// the answer would be "Yes" if the sum of the stones for the 2nd time is less
	// than or equal to the sum of the stones for the 1st time
	// if it increases, then there must have been an error while recording so 
	// the answer for that is "No"
	cout << (x_sum >= y_sum ? "Yes" : "No") << '\n';
	return 0;
}

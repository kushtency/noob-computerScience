#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	int t;
	cin >> t;
	while(t--){
		long double a, b;
		cin >> a >> b;
		int n = abs(b - a) + 1;
		long long sum = ((n/2.0)*(a+b));

		cout << sum << "\n";
	}
}
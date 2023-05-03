#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,c;
	cin >> a >> b >> c;
	int max = (a>b and a>c) ? a : (b>c) ? b : (c>b) ? c : b;
	int min = (a<b and a<c) ? a : (b<c) ? b : (c<b) ? c : b;

	cout << min << " " << max << endl;
}
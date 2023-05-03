#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char x;
	cin >> x;

	if(x>=65 and x<=96){
		cout << (char)(x + 32) << endl;
	}else{
		cout << (char)(x - 32) << endl;
	}
}

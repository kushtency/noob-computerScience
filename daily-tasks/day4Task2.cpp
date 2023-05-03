#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, ans;
	char s, q;
	bool chk = false;
	cin >> a >> s >> b >> q >> c;

	if(s == '+'){
		chk = (a+b == c);
		ans = a+b;
	}else if(s == '-'){
		chk = (a-b == c);
		ans = a-b;
	}else if(s == '*'){
		chk = (a*b == c);
		ans = a*b;
	}

	if(chk){
		cout << "Yes" << endl;
	}else{
		cout << ans << endl;
	}
}
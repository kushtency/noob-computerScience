#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	if(b*(log(a)) > d*(log(c))){
		cout << "YES" << '\n';
	}else{
		cout << "NO" << '\n';
	}
}
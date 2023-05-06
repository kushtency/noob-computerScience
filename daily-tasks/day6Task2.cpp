#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	bool isPrime = true;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0){
			cout << "NO" << "\n";
			isPrime = false;
			break;
		}
	}
	if(isPrime){
		cout << "YES" << "\n";
	}
	return 0;
}
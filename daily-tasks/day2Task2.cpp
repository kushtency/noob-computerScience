#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	
	int w; cin >> w;
	if(w == 2){
		cout << "NO" << endl;
	}else if(w%2 == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double f; cin >> f;
	string fstr = to_string(f);
	int dgt = (int)f;
	string dcml = "0";
	int cnt = 0;
	for(int i = 0; i < fstr.size(); i++){
		if(fstr[i] == '.'){
			while(i < fstr.size()){
				dcml += fstr[i];
				i++;
			}
		}
	}
	for(int i = dcml.size()-1; i >= 0; i--){
		if(dcml[i] != '0'){
			break;
		}
		dcml.pop_back();
	}

	if(dcml[dcml.size()-1] == '.'){
		cout << "int " << dgt << '\n';
	}else{
		cout << "float " << dgt << " " << dcml << '\n';
	}
	return 0;
}
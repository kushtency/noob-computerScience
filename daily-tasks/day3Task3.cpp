#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string name1, name2;
	string lname1, lname2;
	getline(cin, name1);
	getline(cin, name2);
	
	for(int i = 0; i < name1.size(); i++){
		if(name1[i] == ' '){
			i += 1;
			while(i != name1.size()){
				lname1 += name1[i];
				i++;
			}
		}
	}

	for(int i = 0; i < name2.size(); i++){
		if(name2[i] == ' '){
			i += 1;
			while(i != name2.size()){
				lname2 += name2[i];
				i++;
			}
		}
	}
	
	cout << ((lname2 == lname1) ? "ARE Brothers" : "NOT") << endl;

}
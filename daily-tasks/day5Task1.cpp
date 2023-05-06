#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num1, num2;
	char comp;
	cin >> num1 >> comp >> num2;

	if((num1 > num2 and comp == '>')
		or (num1 < num2 and comp == '<')
		or (num1 == num2 and comp == '=')){
		cout << "Right" << '\n';
	}else{
		cout << "Wrong" << '\n';
	}
	
	return 0;
}
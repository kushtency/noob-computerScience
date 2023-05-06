#include<bits/stdc++.h>

using namespace std;

void checkNum(int num, int arr[], int size){
	if(num > 0){
		arr[2] += 1;
	}
	if(num < 0){
		arr[3] += 1;
	}
	if(num%2 == 0){
		arr[0] += 1;
	}
	if(num%2 != 0){
		arr[1] += 1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	int arr[t];
	int rec[4]{0};
	string recS[4]{"Even: ", "Odd: ", "Positive: ", "Negative: "};
	for(int i = 0; i < t; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < t; i++){
		checkNum(arr[i], rec, 4);
	}
	for(int i = 0; i < 4; i++){
		cout << recS[i] << rec[i] << "\n";
	}

}
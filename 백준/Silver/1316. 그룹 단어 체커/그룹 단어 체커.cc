#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool group(string &s){
	string r_s;
	for(int i =0; i<s.size(); ++i){
		if(s[i]!=s[i+1]){
			r_s += s.substr(i,1);
		}
	}
	
	for(int i = 0; i<r_s.size(); ++i){
		for(int j = i+1; j<r_s.size(); ++j){
			if(r_s[i] == r_s[j]){
				return false;
			}
		}
	}
	
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n, cnt=0 ;
	cin>>n;
	string * str = new string[n];
	
	
	for(int i =0; i<n; ++i){
		cin>>str[i];
		if(group(str[i])){
			cnt++;
		}
	}
	
	cout<<cnt<<"\n";
	
	return 0;
}


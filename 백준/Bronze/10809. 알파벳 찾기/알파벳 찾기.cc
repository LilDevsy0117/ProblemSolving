#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	
	string str;
	cin>>str;
	
	int ary[26];
	memset(ary, -1, sizeof(ary));
	int idx;
	
	for(int i =0; i<str.size(); ++i){
		idx = str[i] -97;
		if(ary[idx] == -1){
			ary[idx] = i;
		}
	}
	
	for(int i =0; i<26; ++i){
		cout<<ary[i]<<" ";
	}
	
	
	return 0;
}


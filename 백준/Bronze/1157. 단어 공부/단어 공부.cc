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
	int idxary[26] = {0, };
	int idx;
	
	
	for(int i =0; i<str.size() ; i++){
		idx = str[i] - 97;
		if(idx<0){
			idx = str[i] - 65;
		}
		idxary[idx]++;
	}
	
	int max = 0;
	int cnt = 0;
	int midx = 0;
	for(int i =0; i<26; ++i){
		if(max<=idxary[i] && idxary[i]>0){
			max = idxary[i];
			midx = i;
		}
	}
	for(int i =0; i<26; ++i){
		if(idxary[i] == max){
			cnt++;
		}
	}
	if(cnt>1){
		cout<<"?"<<"\n";
	}else{
		cout<<static_cast<char>(midx+65)<<"\n";
	}
	
	return 0;
}


#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	string str;
	getline(cin, str);
	int strcnt = 0;
	
	for(int i =0; i<str.size(); ++i){
		if(str[i] == 32){
			strcnt ++;
			if(i == 0 || i == str.size() - 1){
				strcnt--;
			}
		}
	}
	
	if(str.size()==1 && str[0] == 32){
		--strcnt;
	}
	cout<<++strcnt<<"\n";
	
	return 0;
}


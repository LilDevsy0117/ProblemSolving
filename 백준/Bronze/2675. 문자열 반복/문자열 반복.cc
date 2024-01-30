#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int testcase;
	cin>>testcase;
	
	string str;
	int repeat;
	string resultstr;
	
	for(int i =0; i<testcase; ++i){
		cin>>repeat;
		cin>>str;
		for(int j = 0; j<str.size(); ++j){
			for(int k =0; k<repeat; ++k){
				resultstr += str[j];
			}
		}
		cout<<resultstr<<"\n";
		resultstr="";
		
	}
	return 0;
}


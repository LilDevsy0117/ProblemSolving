#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	string s;
	cin>>s;
	int time = 0;
	
	for(int i =0; i<s.size(); ++i){
		if(s[i] - 65 <3){
			time += 3;
		}else if(s[i] - 65 <6){
			time += 4;
		}else if(s[i] - 65 <9){
			time += 5;
		}else if(s[i] - 65 <12){
			time += 6;
		}else if(s[i] - 65 <15){
			time += 7;
		}else if(s[i] - 65 <19){
			time += 8;
		}else if(s[i] - 65 <22){
			time += 9;
		}else{
			time += 10;
		}
	}
	
	cout<<time<<"\n";
	
	return 0;
}


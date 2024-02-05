#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin>>n;
	int a = 666;
	string temp;
	int cnt = 0;
	
	while(1){
		temp = to_string(a);
		if(temp.find("666") != string::npos){
			++cnt;
		}
		
		if(cnt == n){
			cout<<temp<<"\n";
			break;
		}
		
		++a;
	}
	
	
	return 0;
}


#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	string s1, s2;
	cin>>s1>>s2;
	
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	
	int a = stoi(s1);
	int b = stoi(s2);
	
	if(a>b){
		cout<<a<<"\n";
	}else{
		cout<<b<<"\n";
	}
	
	return 0;
}


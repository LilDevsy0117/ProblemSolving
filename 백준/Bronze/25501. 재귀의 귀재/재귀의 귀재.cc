#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>

using namespace std;

int cnt = 0;
int recursion(const char* s, int l, int r){
	++cnt;
	if(l>=r) return 1;
	else if(s[l] != s[r]) return 0;
	else return recursion(s, l+1, r-1);
}

int isPalindrome(const char* s){
	return recursion(s, 0 , strlen(s)-1);
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin>>T;
	char s[1001];
	for(int i = 0; i < T; ++i) {
		cin>>s;
		cout<<isPalindrome(s)<<" "<<cnt<<"\n";
		cnt = 0;
	}
	
	return 0;
}
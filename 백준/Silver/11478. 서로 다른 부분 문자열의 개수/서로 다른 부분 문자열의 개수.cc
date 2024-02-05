#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#include <ctime>

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;
	
	int rptnum = s.length()*(s.length()+1)/2;
	set<string> v;
	int cnt = s.length();
	string temps;
	int len = 1;
	while(len <= cnt) {
		for(int j = 0; j + len -1< cnt; ++j) {
			temps = s.substr(j, len);
			v.insert(temps);
		}
		++len;
	}
	
	cout<<v.size();
	
	

	return 0;
}
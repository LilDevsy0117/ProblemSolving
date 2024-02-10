#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	vector<int> v;
	int t;
	cin>>t;
	int number[8001] = {0,};
	int n;
	int mean = 0;
	for(int i = 0; i < t; ++i){
		cin>>n;
		v.push_back(n);
		mean+=n;
		number[n + 4000]++;
	}
	
	sort(v.begin(), v.end());
	int most = -9999;
	int mode;
	bool flag = false;
	for(int i =0; i<8001; ++i){
		if(number[i] == 0) continue;
		if(number[i] == most){
			if(flag){
				mode = i -4000;
				flag = false;
			}
		}
		if(number[i] > most){
			most = number[i];
			mode = i -4000;
			flag = true;
		}
	}
	
	mean = round((float)mean/t);
	int range = v.back() - v.front();
	int middle = v[v.size()/2];
	cout<<mean<<"\n";
	cout<<middle<<"\n";
	cout<<mode<<"\n";
	cout<<range<<"\n";
	
	return 0;
}


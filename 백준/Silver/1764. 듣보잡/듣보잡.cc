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
	
	int a,b;
	cin>>a>>b;
	vector<string> v1(a);
	vector<string> v2;
	
	string str;
	for(int i = 0; i<a; ++i){
		cin>>str; 
		v1[i] = str;
	}
	sort(v1.begin(), v1.end());
	int count = 0;
	int left = 0, right = a-1;
	
	
	for(int i = 0; i<b; ++i){
		cin>>str;
		while(left <= right){
			int mid = (left + right)/2;
			if(v1[mid] == str){
				++count;
				v2.push_back(str);
				break;
			}else if(v1[mid]>str){
				right = mid -1;
			}else{
				left = mid +1;
			}
		}
		left = 0; right = a-1;
	}
	
	cout<<count<<"\n";
	sort(v2.begin(), v2.end());
	for(auto it : v2){
		cout<<it<<"\n";
	}

	return 0;
}
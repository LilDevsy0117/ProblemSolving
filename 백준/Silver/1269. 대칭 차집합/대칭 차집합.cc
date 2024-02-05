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
	
	vector<int> s1(a);
	vector<int> s2(b);
	int num;
	for(int i = 0; i < a; ++i) {
		cin>>num;
		s1[i] = num;
	}
	
	for(int i = 0; i < b; ++i) {
		cin>>num;
		s2[i] = num;
	}
	
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	
	int left , right;
	int count = 0;
	int sum = 0;
	for(int i = 0; i < b; ++i){
		left = 0; 
		right = a-1;
		while(left<=right){
			int mid = (left+right)/2;
			if(s2[i]==s1[mid]){
				++count;
				break;
			}else if(s1[mid]>s2[i]){
				right = mid -1;
			}else{
				left = mid +1;
			}
		}
	}
	sum = sum + a - count;
	
	count = 0;
	for(int i = 0; i < a; ++i){
		left = 0; 
		right = b-1;
		while(left<=right){
			int mid = (left+right)/2;
			if(s1[i]==s2[mid]){
				++count;
				break;
			}else if(s1[i]<s2[mid]){
				right = mid -1;
			}else{
				left = mid +1;
			}
		}
		
	}
	sum = sum + b - count;
	cout<<sum;
	
	
	
	
	return 0;
}
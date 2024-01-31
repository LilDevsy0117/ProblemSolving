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
	
	int n ;
	cin>>n;
	int pn = 0;
	
	int* ary = new int[n];
	for(int i = 0; i < n; i++){
		cin >>ary[i];
	}
	
	for(int i =0; i<n; ++i){
		if(ary[i] == 1 || ary[i] == 4){
			continue;
		}else if(ary[i] < 5){
			++pn;
		}else{
			++pn;
			for(int j = 2; j<=sqrt(ary[i]); ++j){
				if(ary[i] % j == 0){
					--pn;
					break;
				}
			}
			
		}
	}
	cout<<pn<<"\n";
	
	
	return 0;
}


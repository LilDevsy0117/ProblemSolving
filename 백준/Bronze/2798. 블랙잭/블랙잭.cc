#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
#include <cmath>
using namespace std;

vector<int> static_v;

void combination(vector<int> v, vector<int> comb, int r, int idx, int depth, int m){
	int sum = 0;
	int gap = 0;
	int rstgap = m;
	if(r==0){
		for(int i =0; i<comb.size(); ++i){
			sum += comb[i];
		}
		static_v.push_back(sum);
	}else if(depth == v.size()){
		return;
	}else{
		comb[idx] = v[depth];
		combination(v,comb,r-1,idx+1,depth+1,m);
		
		combination(v,comb,r,idx,depth+1,m);
	}
}




int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	vector<int>v(n);
	for(int i = 0; i<n; ++i){
		cin>>v[i];
	}
	int r =3;
	vector<int> comb(r);
	
	combination(v,comb,r,0,0, m);
	
	int gap = m;
	int rst = static_v[0];
	for(int i =0; i<static_v.size(); ++i){
		if(static_v[i] <= m){
			if(m-static_v[i] <gap){
				gap = m - static_v[i];
				rst = static_v[i];
			}
		}
	}
	
	cout<<rst<<"\n";
	

	
	return 0;
}


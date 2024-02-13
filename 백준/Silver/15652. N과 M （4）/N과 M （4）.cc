#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;
int n,m;
int arr[9] = {0,};

void dfs(int cnt){
	if(cnt == m){
		for(int i=0;i<m;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=1; i<=n; ++i){
		if(arr[cnt-1] <= i){
			arr[cnt] = i;
			dfs(cnt +1);
		}
		
	}
}


int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n>>m;
	dfs(0);
	
	return 0;
}
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n,k;
vector<int> temp(500000);
vector<int> v;
int r=0;
bool flag = false;
void merge(int left, int right){
	int mid = (left+right)/2;
	int i = left;
	int j = mid+1;
	int t = 0;
	while(i<= mid && j<= right){
		if(v[i] <= v[j]){
			temp[t++] = v[i++];
		}else{
			temp[t++] = v[j++];
		}
	}
	
	if(i>mid){
		while(j<=right){
			temp[t++] = v[j++];
		}
		
	}else{
		while(i<=mid){
			temp[t++] = v[i++];
		}
	}
	
	i = left;
	t = 0;
	while(i<=right){
		v[i] = temp[t];
		//cout<<temp[t]<<" ";
		++r;
		if(r == k){
			cout<<temp[t];
			flag = true;
		}
		++i;
		++t;
	}
	
}

void merge_sort(int left, int right){
	int mid;
	if(left<right){
		mid = (left+right)/2;
		merge_sort(left, mid);
		merge_sort(mid+1, right);
		merge(left, right);
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin>>n>>k;
	int num;
	for(int i = 0; i<n; i++){
		cin>>num;
		v.push_back(num);
	}
	
	merge_sort(0, n-1);
	if(flag == false){
		cout<<-1;
	}
	// cout<<"\n";
	// for(int i = 0; i<n; i++){
	// 	cout<<v[i];
	// }
	
}
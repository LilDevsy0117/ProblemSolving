#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);

	int n, x;
	cin>>n>>x;
	
	int* numarr = new int[n];
	
	for(int i =0; i<n; ++i){
		cin>>numarr[i];
		if(numarr[i]<x){
			cout<<numarr[i]<<" ";
		}
	}
	

	
}	
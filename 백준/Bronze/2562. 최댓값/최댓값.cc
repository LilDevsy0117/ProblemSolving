#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int max;
	int array[9];
	
	for(int i =0; i<9; i++){
		cin>>array[i];
	}
	max = array[0];
	int idx=0;
	
	for(int i =1; i<9; ++i){
		if(max<array[i]){
			max = array[i];
			idx = i;
		}
	}
	
	cout<<max<<"\n";
	cout<<idx+1<<"\n";
	
}	
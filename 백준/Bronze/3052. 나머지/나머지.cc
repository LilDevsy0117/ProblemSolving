#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int num[10];
	int rest[10];
	int difnum=0;
	
	for(int i =0; i<10; ++i){
		cin>>num[i];
		rest[i] = num[i]%42;
	}
	int j;
	for(int i =0; i<10; ++i){
		for(j =0; j<i; ++j){
			if(rest[i] == rest[j]){
				break;
			}
		}
		if(i==j) difnum++;
	}
	
	
	cout<<difnum<<"\n";
	

}	
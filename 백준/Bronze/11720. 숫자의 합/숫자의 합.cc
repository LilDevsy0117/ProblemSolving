#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int length;
	cin>>length;
	
	string str;
	cin>>str;
	
	int sum = 0;
	for(int i =0; i<length; ++i){
		sum+=(str[i] - '0');
	}
	
	cout<<sum<<"\n";
	
	return 0;
}


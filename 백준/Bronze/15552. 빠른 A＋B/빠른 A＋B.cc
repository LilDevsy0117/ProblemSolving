#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	int n1, n2;
	
	int sum = 0;
	for(int i =0; i<t; ++i){
		cin>>n1>>n2;
		sum = n1 + n2;
		cout<<sum<<"\n";
	}
	
	
}
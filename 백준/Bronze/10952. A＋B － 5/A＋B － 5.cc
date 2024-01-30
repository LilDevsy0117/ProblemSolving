#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);

	int n1, n2;
	int sum = 0;
	while(1){
		cin>>n1>>n2;
		sum = n1 + n2;
		if(n1 == 0 && n2 == 0){
			break;
		}
		cout<<sum<<"\n";
	}

	
}	
	#include <iostream>
	#include <string>
	#include <map>
	#include <set>
	#include <vector>
	#include <algorithm>
	#include <cmath>

	using namespace std;

	int main(){
		ios_base :: sync_with_stdio(false);
		cin.tie(NULL);	
		cout.tie(NULL);

		int t;
		cin>>t;
		int num;
		int q,d,n,c;
		for(int i=0;i<t;++i){
			cin>>num;
			q = num/25;
			num%=25;
			d = num/10;
			num%=10;
			n = num/5;
			num%=5;
			c = num/1;
			cout<<q<<" "<<d<<" "<<n<<" "<<c<<"\n";
		}
	}
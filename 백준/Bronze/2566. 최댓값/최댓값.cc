#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int max = -1;
	int mi, mj;
	for(int i = 1; i<=9; ++i){
		for(int j=1; j<=9; ++j){
			cin>>n;
			if(n>max){
				max = n;
				mi = i;
				mj = j;
			}
		}
	}
	
	cout<<max<<"\n"<<mi<<" "<<mj;
}
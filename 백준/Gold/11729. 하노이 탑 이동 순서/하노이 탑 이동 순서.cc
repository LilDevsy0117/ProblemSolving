#include <iostream>
#include <string>
// #include <vector>
// #include <algorithm>
// #include <cmath>
using namespace std;



void hanoi(int n, int from,int by, int to){
	
	if(n==0){
		
		return;
	}
	hanoi(n-1, from, to, by);
	cout<<from<<" "<<to<<"\n";
	hanoi(n-1, by, from, to);
	// cout<<cnt<<"\n";

}

int cnt = 0;

void hanoicnt(int n, int from,int by, int to){
	if(n==0){
		
		return;
	}
	++cnt;
	
	hanoicnt(n-1, from, to, by);
	// cout<<from<<" "<<to<<"\n";
	hanoicnt(n-1, by, from, to);
	// cout<<cnt<<"\n";

}




int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin >>n;
	hanoicnt(n,1,2,3);
	cout<<cnt<<"\n";
	hanoi(n,1,2,3);
	
	return 0;
}


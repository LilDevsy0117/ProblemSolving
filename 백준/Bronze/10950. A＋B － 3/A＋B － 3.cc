#include <iostream>

using namespace std;

int main(){
	int casenum;
	cin>>casenum;
	int n1, n2;
	int* numarr = new int[casenum];
	
	for(int i = 0; i<casenum; i++){
		cin>>n1>>n2;
		numarr[i] = n1 + n2;
	}
	
	for(int i =0; i<casenum; i++){
		cout<<numarr[i]<<endl;
	}
	delete[] numarr;
}
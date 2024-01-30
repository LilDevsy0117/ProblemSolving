#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);

	int length;
	cin>>length;
	int max, min;
	
	int *array = new int[length];
	
	for(int i =0; i<length; i++){
		cin>>array[i];
	}
	
	min = array[0];
	max = array[0];
	
	for(int i =1; i<length; ++i){
		if(min>array[i])
			min = array[i];
		if(max<array[i]){
			max = array[i];
		}
	}
	cout<<min<<" "<<max<<"\n";
	
	delete[] array;
	
	
}	
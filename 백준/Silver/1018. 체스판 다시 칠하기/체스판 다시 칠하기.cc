#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
#include <cmath>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n , m;
	cin>>n>>m;
	
	vector<string> v(n);
	
	for(int i =0; i<n; ++i){
		cin>>v[i];
	}
	int w_cnt = 0;
	int b_cnt = 0;
	int min = n*m;
	int l_start = 0, l_end = 8;
	int c_start = 0, c_end = 8;
	char b = 'B';
	int k=0;
	while(c_end<=n){
		for(int i = c_start; i<c_end; ++i){
			for(int j =l_start; j<l_end; ++j){
				if(v[i][j] != b) {
					++b_cnt;
				}
				if(b=='B'){
					b = 'W';
				}else{
					b = 'B';
				}
			}
			++k;
			if(k%2 == 0){
				b = 'B';
			}else{
				b = 'W';
			}
		}
		k = 0;
		// cout<<c_start<<"-"<<c_end<<":"<<b_cnt<<"\n";
		if(b_cnt<min){
			min = b_cnt;
		}
		b_cnt = 0;
		if(l_end<m){
			++l_start;
			++l_end;
		}else{
			l_start = 0;
			l_end = 8;
			++c_start;
			++c_end;
		}
	}
	
	b_cnt = min;

	l_start = 0; l_end = 8; c_start = 0 ; c_end = 8;
	char w = 'W';
	min = n*m;
	while(c_end<=n){
		for(int i = c_start; i<c_end; ++i){
			for(int j =l_start; j<l_end; ++j){
				if(v[i][j] != w) {
					++w_cnt;
				}
				if(w=='B'){
					w = 'W';
				}else{
					w = 'B';
				}
			}
			++k;
			if(k%2 == 0){
				w = 'W';
			}else{
				w = 'B';
			}
		}
		k = 0;
		if(w_cnt<min){
			min = w_cnt;
		}
		w_cnt = 0;
		if(l_end<m){
			++l_start;
			++l_end;
		}else{
			l_start = 0;
			l_end = 8;
			++c_start;
			++c_end;
		}
	}
	
	w_cnt = min;
	
	
	if(w_cnt<b_cnt){
		cout<<w_cnt<<"\n";
	}else{
		cout<<b_cnt<<"\n";
	}
	
	return 0;
}


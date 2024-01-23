#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    string s = "";
    for(int i = 16; i>=0; i--){
        if(n >= pow(3, i)*2){
            s += "2";
            n -= pow(3,i)*2;
        }else if(n >= pow(3, i)){
            s += "1";
            n -= pow(3,i);
        }else{
            if(s.size()>0){
                s += "0";
            }
            
        }
    }
    reverse(s.begin(),s.end());
    int k = s.size()-1;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '2'){
            answer += pow(3, k)*2;
        }else if(s[i] == '1'){
            answer += pow(3, k);
        }
        k--;
    }
    
    return answer;
}
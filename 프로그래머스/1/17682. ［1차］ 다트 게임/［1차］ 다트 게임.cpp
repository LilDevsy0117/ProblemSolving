#include <string>
#include <cctype>
#include <vector>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> v;
    int n = -1;
    string s = "";
    for(auto i : dartResult){
        if(isdigit(i)){
            if(n != -1){
                n =10;
            }else{
                n = i -'0';
            }
        }else if(i == '*'){
            if(v.size() > 1){
                 v[v.size()-1] *= 2;
                 v[v.size()-2] *= 2;
            }else{
                v[v.size()-1] *= 2;
            }
        }else if(i == '#'){
            v[v.size()-1] *= -1;
        }else{
            if(i == 'D'){
                n = n*n;
            }else if(i == 'T'){
                n = n*n*n;
            }
            v.push_back(n);
            n = -1;
        }
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
        answer += v[i];
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> v{"aya", "ye", "woo", "ma"};
    string s;
    string prev;
    for(int i = 0; i<babbling.size(); i++){
        s = "";
        prev = "";
        for(int j = 0; j<babbling[i].size(); j++){
            s += babbling[i][j];
            if((find(v.begin(), v.end(), s) != v.end()) && prev != s){
                prev =s;
                s="";
            }
        }
        if(s.size() == 0) answer++;
    }
    return answer;
}
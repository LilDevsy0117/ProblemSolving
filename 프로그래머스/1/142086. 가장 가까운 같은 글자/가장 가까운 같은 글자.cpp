#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for(int i = 0; i<s.size(); i++){
        int idx = -1;
        for(int j = 0; j<i; j++){
            if(s[j] == s[i]) idx = j;
        }
        if(idx == -1){
            answer.push_back(idx);
        }else{
            answer.push_back(i - idx);
        }
        
    }
    return answer;
}
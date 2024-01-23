#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> v = {"aya", "ye", "woo", "ma"};
    for(int i = 0; i<babbling.size(); i++){
        int len = 0;
        for(int j = 0; j<v.size(); j++){
            if(babbling[i].find(v[j]) != string::npos){
                len += v[j].size(); 
            }
        }
        if(len == babbling[i].size()){
            answer++;
        }
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    vector<string> v = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    
    int i = 0;
    string s;
    while(i < msg.size()){
        s = "";
        s += msg[i];
        if(i == msg.size()-1){
            answer.push_back(find(v.begin(), v.end(), s) - v.begin() + 1);
            break;
        }
        
        for(int j = i+1; j < msg.size(); j++){
            s += msg[j];
            i++;
            if(find(v.begin(), v.end(), s) == v.end()){
                v.push_back(s);
                s.pop_back();
                answer.push_back(find(v.begin(), v.end(), s) - v.begin() + 1);
                break;
            }else if(j == msg.size() - 1){
                answer.push_back(find(v.begin(), v.end(), s) - v.begin() + 1);
                return answer;
            }
        }
        
    }
    
    return answer;
}
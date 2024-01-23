#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(const auto it : order){
        if(it.find("americano") != string::npos){
            answer += 4500;
        }else if(it.find("cafelatte") != string::npos){
            answer += 5000;
        }else{
            answer += 4500;
        }
    }
    return answer;
}
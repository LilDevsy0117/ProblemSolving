#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(int i = 0; i<emergency.size(); i++){
        int a = 1;
        for(int j = 0; j<emergency.size(); j++){
            if(emergency[i] < emergency[j]){
                a++;
            }
        }
        answer.push_back(a);
    }
    return answer;
}
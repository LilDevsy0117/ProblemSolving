#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    for(int i = 0; i<k; i++){
        honor.push_back(score[i]);
        sort(honor.begin(), honor.end());
        answer.push_back(honor[0]);
        if(i == score.size()-1) break;
    }
    for(int i = k; i<score.size(); i++){
        for(int j = 0; j<honor.size(); j++){
            if(honor[j] < score[i]){
                honor[j] = score[i];
                break;
            }
        }
        sort(honor.begin(), honor.end());
        answer.push_back(honor[0]);
    }
    return answer;
}
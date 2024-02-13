#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> v;
    for(int i = 0; i<speeds.size(); i++){
        v.push_back((100-progresses[i])%speeds[i] == 0 ? (100-progresses[i])/speeds[i] : (100-progresses[i])/speeds[i]+1);
    }
    int temp;
    for(int i = 0; i<v.size(); i++){
        if(v[i] > 0){
            temp = v[i];
            answer.push_back(1);
            for(int j = i; j<v.size(); j++){
                v[j] -= temp;
            }
        }else{
            answer.back()++;
        }
    }
    return answer;
}
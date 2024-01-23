#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> v(n+1,1);
    for(int i = 0; i<lost.size(); i++){
        v[lost[i]] = 0;
    }
    for(int i = 0; i<reserve.size(); i++){
        v[reserve[i]] ++;
    }
    if(v[1] == 0 && v[2] > 1){
        v[1]++;
        v[2]--;
    }
    for(int i = 2; i<v.size()-1; i++){
        if(v[i]==0){
            if(v[i-1] > 1){
                v[i-1]--;
                v[i]++;
            }else if(v[i+1] > 1){
                v[i+1]--;
                v[i]++;
            }
        }
    }
    if(v[v.size()-1] == 0 && v[v.size()-2] >1){
        v[v.size()-1]++;
        v[v.size()-2]--;
    }
    for(int i = 1; i<v.size(); i++){
        if(v[i]) answer++;
    }
    return answer;
}
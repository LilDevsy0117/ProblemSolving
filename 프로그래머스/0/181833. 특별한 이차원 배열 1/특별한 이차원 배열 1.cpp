#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> v;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                v.push_back(1);
            }else{
                v.push_back(0);
            }
        }
        answer.push_back(v);
        v.clear();
    }
    return answer;
}
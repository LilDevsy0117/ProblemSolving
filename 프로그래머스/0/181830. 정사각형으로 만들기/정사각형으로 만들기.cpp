#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    answer.resize(arr.size());
    copy(arr.begin(), arr.end(),answer.begin());
    int size1 = answer.size();
    int size2 = answer[0].size();
    if(size1 > size2){
        for(int i = 0; i<size1; i++){
            for(int j = 0; j<size1-size2; j++){
                answer[i].push_back(0);
            }
        }
    }else{
        vector<int> v(size2);
        for(int i = 0; i<size2 - size1; i++){
            answer.push_back(v);
        }
    }
    return answer;
}
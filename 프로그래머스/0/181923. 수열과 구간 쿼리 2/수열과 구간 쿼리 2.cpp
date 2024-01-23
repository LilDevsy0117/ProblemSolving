#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i =0; i<queries.size(); i++){
        bool flag = false;
        for(int j = queries[i][2]+1; j<=*max_element(arr.begin()+queries[i][0] , arr.begin() + queries[i][1]+1); j++){
            if(arr.begin() + queries[i][1]+1 != find(arr.begin()+queries[i][0] , arr.begin() + queries[i][1]+1, j)){
                answer.push_back(j);
                flag = true;
                break;
            }
        }
        if(!flag){
            answer.push_back(-1);
        }
    }
    return answer;
}
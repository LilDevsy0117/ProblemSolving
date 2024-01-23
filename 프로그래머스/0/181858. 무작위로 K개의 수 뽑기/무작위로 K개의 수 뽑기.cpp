#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i = 0; i<arr.size(); i++){
        if(answer.size() == k){
            break;
        }
        if(count(answer.begin(), answer.end(), arr[i]) == 0){
            answer.push_back(arr[i]);
        }
    }
    while(k>answer.size()){
        answer.push_back(-1);
    }
    
    return answer;
}
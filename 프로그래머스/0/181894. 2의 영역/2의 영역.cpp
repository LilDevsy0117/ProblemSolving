#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int c = 0;
    int v_count = count(arr.begin(), arr.end(), 2);
    for(int i =0; i<arr.size(); i++){
        if(arr[i] == 2){
            answer.push_back(arr[i]);
            c++;
        }else if(c>0 && c<v_count){
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() == 0){
        answer.push_back(-1);
    }
    return answer;
}
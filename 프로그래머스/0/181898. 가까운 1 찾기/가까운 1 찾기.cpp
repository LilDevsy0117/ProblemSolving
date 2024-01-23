#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    vector<int> slice(arr.begin() + idx, arr.end());
    auto it = find(slice.begin(), slice.end(), 1);
    if(it != slice.end()){
        answer = it - slice.begin() + idx;
    }else{
        answer--;
    }
    return answer;
}
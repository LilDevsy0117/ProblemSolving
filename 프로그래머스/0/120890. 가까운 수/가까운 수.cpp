#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    array.push_back(n);
    sort(array.begin(), array.end());
    auto it = find(array.begin(), array.end(), n) - array.begin();
    if(it == 0){
        answer = array[it+1];
    }else if(it == array.size()-1){
        answer = array[it-1];
    }else{
        if(array[it] - array[it-1]> array[it+1] -array[it]){
            answer = array[it+1];
        }else{
            answer = array[it-1];
        }
    }
    
    return answer;
}
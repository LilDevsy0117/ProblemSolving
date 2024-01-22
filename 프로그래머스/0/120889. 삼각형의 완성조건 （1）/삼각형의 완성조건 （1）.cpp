#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_v = max_element(sides.begin(), sides.end()) - sides.begin();
    int sum = 0;
    for(int i = 0; i<sides.size(); i++){
        if(i != max_v){
            sum += sides[i];
        }
    }
    if(sum > *max_element(sides.begin(), sides.end())){
        answer = 1;
    }else{
        answer =2;
    }
    return answer;
}
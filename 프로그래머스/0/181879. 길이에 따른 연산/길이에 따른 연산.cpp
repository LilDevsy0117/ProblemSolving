#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 1;
    if(num_list.size() > 10){
        answer = accumulate(num_list.begin(), num_list.end(), 0);
    }else{
        for(int i = 0; i<num_list.size(); i++){
            answer *= num_list[i];
        }
    }
    return answer;
}
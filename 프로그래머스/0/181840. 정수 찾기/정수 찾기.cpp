#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    if(count(num_list.begin(), num_list.end(), n) > 0){
        answer = 1;
    }
    return answer;
}
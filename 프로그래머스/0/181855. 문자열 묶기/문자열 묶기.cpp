#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> v(31);
    for(const auto i : strArr){
        v[i.size()]++;
    }
    answer = *max_element(v.begin(), v.end());
    return answer;
}
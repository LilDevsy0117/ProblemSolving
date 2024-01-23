#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> v(1000);
    for(int i =0; i<array.size(); i++){
        v[array[i]]++;
    }
    int max = *max_element(v.begin(), v.end());
    if(count(v.begin(), v.end(), max) >1){
        answer = -1;
    }else{
        answer = max_element(v.begin(), v.end()) - v.begin();
    }
    return answer;
}
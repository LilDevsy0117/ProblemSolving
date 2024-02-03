#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> v(1000);
    # array 에 값에 해당하는 벡터 인덱스 참조 후 값 증가
    for(int i =0; i<array.size(); i++){
        v[array[i]]++;
    }
    int max = *max_element(v.begin(), v.end());
    # 최빈값 구하고 최빈값이 개수가 하나 이상이면 -1
    if(count(v.begin(), v.end(), max) >1){
        answer = -1;
    }else{
        answer = max_element(v.begin(), v.end()) - v.begin();
    }
    return answer;
}

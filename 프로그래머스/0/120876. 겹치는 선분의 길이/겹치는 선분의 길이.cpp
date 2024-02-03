#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> v(201);
    # 벡터 선언해서 [x,y)범위로 값 1증가
    for(int i =0; i<lines.size(); i++){
        for(int j =lines[i][0]; j<lines[i][1]; j++){
            v[j+100]++;
        }
    }
    for(int i =0;i<v.size(); i++){
        if(v[i] > 1){
            answer++;
        }
    }
    
    return answer;
}

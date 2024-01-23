#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<bool> v(n, true);
    for(auto i : section){
        v[i-1] = false;
    }
    for(int i = 0; i<n; i++){
        if(!v[i]){
            answer ++;
            for(int j = i; j<i+m; j++){
                if(j>=n) break;
                v[j] = true;
            }
        }
    }
    
    return answer;
}
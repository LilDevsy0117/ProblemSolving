#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int row = 0;
    for(long long i = left; i<=right; i++){
        if(i%n < i/n){
            answer.push_back(int(i/n)+1);
        }else{
            answer.push_back(i%n+1);
        }
    }
    
    return answer;
}
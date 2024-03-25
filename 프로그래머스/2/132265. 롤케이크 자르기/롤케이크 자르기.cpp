#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    vector<int> v(10001);
    for(int i = 0; i<topping.size(); i++){
        v[topping[i]] ++;
    }
    int right = 0;
    set<int> left;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>0){
            right ++;
        }
    }
    for(int i = 0; i<topping.size(); i++){
        left.insert(topping[i]);
        v[topping[i]]--;
        if(v[topping[i]] == 0){
            right --;
        }
        if(left.size() == right) answer++;
    }
    
    return answer;
}
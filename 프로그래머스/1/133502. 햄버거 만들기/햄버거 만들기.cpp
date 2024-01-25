#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v;
    for(int i = 0; i<ingredient.size(); i++){
        v.push_back(ingredient[i]);
        if(v.size()>3){
            int n = v.size();
            if(v[n-4] == 1 && v[n-3] == 2&& v[n-2]==3 && v[n-1] == 1){
                answer++;
                v.pop_back();v.pop_back();v.pop_back();v.pop_back();
            }
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> v;
int t;
int ans = 0;
void go(int z, int sum){
    if(z == v.size()){
        if(t == sum){
            ans ++;
        }
        return;
    }
    
    go(z+1, sum +v[z]);
    go(z+1, sum -= v[z]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    v = numbers;
    t = target;
    go(0, 0);
    
    return ans;
}
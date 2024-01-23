#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> a;
    vector<int> b;
    for(int i = 0; i<num_list.size(); i++){
        if(i <=n-1){
            a.push_back(num_list[i]);
        }else{
            b.push_back(num_list[i]);
        }
    }
    b.insert(b.end(), a.begin(), a.end());
    return b;
}
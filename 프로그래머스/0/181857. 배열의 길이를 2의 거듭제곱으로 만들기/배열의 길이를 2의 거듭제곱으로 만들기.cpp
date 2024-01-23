#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> v = {1,2,4,8,16,32,64,128,256,512, 1024};
    for(int i = 0; i<v.size(); i++){
        if(arr.size() <= v[i]){
            while(arr.size() < v[i]){
                arr.push_back(0);
            }
            break;
        }
    }
    return arr;
}
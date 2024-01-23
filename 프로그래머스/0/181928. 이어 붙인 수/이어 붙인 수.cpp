#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even = "";
    string odd = "";
    for(int elem:num_list){
        if(elem%2==0){
            even += to_string(elem);
        }else{
            odd += to_string(elem);
        }
    }
    answer = stoi(even) + stoi(odd);
    
    return answer;
}
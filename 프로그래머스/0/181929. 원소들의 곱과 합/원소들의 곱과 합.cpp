#include <string>
#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int n_sum=0;
    int n_mul=1;
    for(int elem:num_list){
        n_sum += elem;
        n_mul *= elem;
    }
    n_sum *= n_sum;
    if (n_mul < n_sum){
        answer = 1;
    }
    return answer;
}
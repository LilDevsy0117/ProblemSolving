#include <string>
#include <vector>
#include <numeric>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    answer = accumulate(arr.begin(), arr.end(), double(0))/arr.size();
    return answer;
}
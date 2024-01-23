#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> v{31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> v2{"THU","FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int sum = b;
    for(int i = 0; i<a-1; i++){
        sum+=v[i];
    }
    answer = v2[sum%7];
    return answer;
}
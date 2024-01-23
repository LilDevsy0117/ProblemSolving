#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string s = to_string(a) + to_string(b);
    int num1 = stoi(s);
    s =  to_string(b)+ to_string(a) ;
    int num2 = stoi(s);
    
    answer = max(num1, num2);
    return answer;
}
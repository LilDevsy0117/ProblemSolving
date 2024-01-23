#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string a = to_string(age);
    for(int i = 0; i<a.size(); i++){
        answer += a[i]-'0'+'a';
    }
    return answer;
}
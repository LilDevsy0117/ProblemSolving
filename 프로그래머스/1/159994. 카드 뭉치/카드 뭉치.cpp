#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int a = 0;
    int b = 0;
    for(int i = 0; i<goal.size(); i++){
        if(goal[i] == cards1[a]){
            a++;
        }else if(goal[i] == cards2[b]){
            b++;
        }else{
            answer = "No";
            break;
        }
    }
    return answer;
}
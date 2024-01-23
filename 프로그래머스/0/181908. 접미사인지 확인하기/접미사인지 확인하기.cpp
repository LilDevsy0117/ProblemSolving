#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 1;
    int idx = my_string.length()-1;
    for(int i =is_suffix.length()-1; i>=0; i--){
        if(is_suffix[i] != my_string[idx]){
            answer = 0;
            break;
        }
        idx--;
    }
    
    return answer;
}
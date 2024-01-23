#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    for(int i = 0; i<my_string.size(); i++){
        if(my_string[i] <= 90){
            answer[my_string[i]-65]++ ;
        }else{
            answer[my_string[i]-97+26]++ ;
        }
        
    }
    return answer;
}
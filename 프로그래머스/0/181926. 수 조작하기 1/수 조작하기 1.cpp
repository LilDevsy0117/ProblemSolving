#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    answer = n;
    for(int i =0; i<control.size(); i++){
        if(control[i] == 'w'){
            answer +=1;
        }else if(control[i] == 's'){
            answer -=1;
        }else if(control[i] == 'd'){
            answer +=10;
        }else{
            answer -=10;
        }
    }
    return answer;
}
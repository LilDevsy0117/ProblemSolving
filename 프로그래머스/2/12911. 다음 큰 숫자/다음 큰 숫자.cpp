#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 1;
    int temp = n;
    while(temp>1){
        if(temp%2 == 1){
            cnt++;
        }
        temp /= 2;
    }
    temp = ++n;
    int a ;
    while(1){
        a = 1;
        while(temp>1){
            if(temp%2 == 1){
                a++;
            }
            temp /= 2;
         }
        if(cnt == a){
            answer = n;
            break;
        }
        temp = ++n;
    }
    return answer;
}
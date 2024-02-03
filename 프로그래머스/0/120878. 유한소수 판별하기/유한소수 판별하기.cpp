#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int solution(int a, int b) {
    int answer = 1;
    int m = gcd(a,b);
    b = b/m;
    # 분모를 2의 소인수를 전부 나눔
    while(b != 1){
        if(b%2 == 0){
            b /=2;
        }else{
            break;
        }
    }
    # 분모를 5의 소인수를 나눔, 나눠지지 않는다면 기약분수 x
    while(b != 1){
        if(b%5 == 0){
            b /=5;
        }else{
            answer = 2;
            break;
        }
    }
    return answer;
}

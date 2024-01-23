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
    while(b != 1){
        if(b%2 == 0){
            b /=2;
        }else{
            break;
        }
    }
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
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    int c;
    while(b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = numer1*denom2 + numer2*denom1;
    int b = denom1*denom2;
    answer.push_back(a/gcd(a,b));
    answer.push_back(b/gcd(a,b));
    return answer;
}
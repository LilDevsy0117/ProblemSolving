#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m){
    if(m == 0) return n;
    return gcd(m, n%m);
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int m;

bool cmp(string a, string b){
    if(a[m] == b[m]){
        return a<b;
    }
    return a[m] < b[m];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    m = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}
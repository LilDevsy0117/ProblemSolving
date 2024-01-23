#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = count(s.begin(), s.end(), 'p') + count(s.begin(), s.end(), 'P');
    int y = count(s.begin(), s.end(), 'y') + count(s.begin(), s.end(), 'Y');
    if(p != y) answer = false;
    

    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer;
vector<int> solution(int l, int r);
void recursion(int min_length, int max_length, string start);
string plus_zero(string s);
string plus_five(string s);
vector<int> solution(int l, int r) {
    int min_length = l;
    int max_length = r;
    recursion(min_length, max_length, "5");
	vector<int> result = answer;
    sort(result.begin(), result.end());
    if (result.size() == 0){
        result.push_back(-1);
    }
    return result;
}

void recursion(int min_length, int max_length, string start){
    if(stoi(start) >= min_length && stoi(start) <= max_length){
        answer.push_back(stoi(start));
    }else if(stoi(start) > max_length){
        return;
    }
    recursion(min_length, max_length, plus_zero(start));
    recursion(min_length, max_length, plus_five(start));
}

string plus_zero(string s){
    return s+"0";
}

string plus_five(string s){
    return s+"5";
}
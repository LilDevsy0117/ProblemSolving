#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i<n; i++){
        string s = "";
        for(int j = 0; j<n; j++){
            if(arr1[i] < pow(2, n-1-j) && arr2[i] < pow(2, n-1-j)){
                s+= " ";
            }else{
                s+= "#";
                if(arr1[i] >=pow(2, n-1-j)) arr1[i] -= pow(2, n-1-j);
                if(arr2[i] >=pow(2, n-1-j)) arr2[i] -= pow(2, n-1-j);
            }
        }
        answer.push_back(s);
    }
    return answer;
}
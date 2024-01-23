#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<int> v(n, 0);
    vector<vector<int>> answer(n,v);
    int row_s = 0;
    int col_s = 0;
    int row_e = n-1;
    int col_e = n-1;
    int value = 1;
    while(value <= n*n){
        for(int i = col_s; i<=col_e; i++){
            answer[row_s][i] = value;
            value++;
        }
        row_s++;
        for(int i = row_s; i<=row_e; i++){
            answer[i][col_e] = value;
            value++;
        }
        col_e--;
        for(int i = col_e; i>=col_s; i--){
            answer[row_e][i] = value;
            value++;
        }
        row_e--;
        for(int i = row_e; i>=row_s; i--){
            answer[i][col_s] = value;
            value++;
        }
        col_s++;
    }
    return answer;
}
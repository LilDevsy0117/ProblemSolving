#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i = 0; i<picture.size(); i++){
        int j = 0;
        string word = "";
        for(int a = 0; a<picture[i].size(); a++){
            while(j != k){
                word += picture[i][a];
                j++;
            }
            j=0;
        }
        while(j!=k){
            answer.push_back(word);
            j++;
        }
    }
    return answer;
}
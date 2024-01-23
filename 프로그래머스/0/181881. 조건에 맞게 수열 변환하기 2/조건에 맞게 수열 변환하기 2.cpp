#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool flag =false;
    while(1){
        
        flag = false;
        for(int i = 0; i<arr.size(); i++){
            if((arr[i] >= 50) && (arr[i] % 2 == 0)){
                arr[i] = arr[i] / 2;
                flag = true;
            }else if((arr[i] <= 50) && (arr[i] % 2 != 0)){
                arr[i] = arr[i] *2 + 1;
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
        answer++;
        
    }
    
    return answer;
}
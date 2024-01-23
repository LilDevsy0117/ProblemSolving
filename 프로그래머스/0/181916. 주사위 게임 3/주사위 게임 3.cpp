#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 1;
    int min_number= 7;
    int flag = 0;
    vector<int> v ;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    for(int v_count : v){
        if(count(v.begin(), v.end(), v_count) == 4){
            answer = 1111*v_count;
            flag = 1;
            break;
        }else if(count(v.begin(), v.end(), v_count) == 3){
            int dif_num;
            for(int v_c : v){
                if(count(v.begin(), v.end(), v_c) == 1){
                    dif_num = v_c;
                }
            }
            answer = (10*v_count+dif_num)*(10*v_count+dif_num);
            flag = 1;
            break;
        }else if(count(v.begin(), v.end(), v_count) == 2){
            for(int v_c : v){
                if(count(v.begin(), v.end(), v_c) == 1){
                    answer *= v_c;
                }else if(count(v.begin(), v.end(), v_c) == 2){
                    if(v_c != v_count){
                        answer = (v_c+v_count)*(v_c-v_count);
                        if(answer < 0) answer*= -1;
                    }
                }
            }
            flag = 1;
            break;
        }else{
            if(v_count < min_number) min_number = v_count;
        }
    }
    if (flag == 0){
        answer = min_number;
    }
    
    
    return answer;
}
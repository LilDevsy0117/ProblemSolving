#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    for(int i = 0; i<cities.size(); i++){
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        if(find(cache.begin(), cache.end(), cities[i]) == cache.end()){
            answer+=5;
            cache.push_back(cities[i]);
            if(cache.size() > cacheSize){
                cache.erase(cache.begin(), cache.begin()+1);
            }
        }else{
            answer+=1;
            cache.erase(remove(cache.begin(), cache.end(), cities[i]), cache.end());
            cache.push_back(cities[i]);
            
        }
    }
    return answer;
}
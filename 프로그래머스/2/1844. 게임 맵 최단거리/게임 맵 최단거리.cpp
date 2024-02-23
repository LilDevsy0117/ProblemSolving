#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int h,w;
vector<vector<int>> m;
int min_v;
vector<int> dx = {0,0,1,-1};
vector<int> dy = {1,-1,0,0};

// void dfs(int h_pos, int w_pos, int step){
    
//     if(h_pos == h-1 && w_pos ==w-1){
//         if(step < min_v) min_v =step;
//         return;
//     }else if(step > min_v){
//         return;
//     }
    
//     m[h_pos][w_pos] = 0;
    
//     if(h_pos+1 < h && m[h_pos+1][w_pos]){
//         dfs(h_pos+1, w_pos,step+1);
//     }
//     if(w_pos+1 < w && m[h_pos][w_pos+1]){
//         dfs(h_pos, w_pos+1,step+1);
//     }
//     if(h_pos>0 && m[h_pos-1][w_pos]){
//         dfs(h_pos-1, w_pos,step+1);
//     }
//     if(w_pos>0 && m[h_pos][w_pos-1]){
//         dfs(h_pos, w_pos-1,step+1);
//     }
//     m[h_pos][w_pos] = 1;
// }
queue<int> q;

int bfs(int d){
    int len = q.size()/2;
    for(int i = 0; i<len; i++){
        int nx = q.front();
        q.pop();
        int ny = q.front();
        q.pop();
        if(nx==w-1 && ny==h-1){
            return d;
        }
        for(int i = 0; i<4; i++){
            int x = nx + dx[i];
            int y = ny + dy[i];
            if(x>=0 && x<w && y>=0 && y<h){
                if(m[y][x]){
                    m[y][x] = 0;
                    q.push(x);
                    q.push(y);
                }
            }
        }
    }
    if(q.size() == 0) return 0;
    else return bfs(d+1);
    
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    h = maps.size();
    w = maps[0].size();
    m = maps;
    q.push(0);
    q.push(0);
    m[0][0] = 0;
    min_v = bfs(1);
    if(min_v == 0){
        answer = -1;
    }else{  
        answer = min_v;
    }
    return answer;
}
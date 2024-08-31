#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for(int i = 0; i<T; i++)
    {
        string func;
        cin>>func;
        int n;
        cin>>n;
        deque<string> v;
        string ary;
        cin>>ary;
        string temp = "";
        for(int j = 1; j<ary.size(); j++)
        {
            if((ary[j] == ',') || (ary[j] == ']'))
            {
                if(temp == "") continue;                
                v.push_back(temp);                
                temp = "";
            }
            else{
                temp += ary[j];
            }
        }
        bool flag = false;
        char pos = 'L';
        for(int j = 0; j<func.size(); j++)
        {
            if(func[j] == 'R')
            {
                if(pos == 'L') pos = 'R';
                else pos = 'L';
            }else{
                if(v.size() > 0)
                {
                    if(pos == 'L')
                    {
                        v.pop_front();
                    }else{
                        v.pop_back();
                    }
                    
                }else{
                    flag =true;
                }
            }
        }

        if(flag)
        {
            cout<<"error\n";
        }else{
            cout<<"[";
            if(pos == 'L')
            {
                for(int j = 0; j<v.size(); j++)
                {
                    if(j != v.size()-1)
                    {
                        cout<<v[j]<<",";
                    }else{
                        cout<<v[j];
                    }
                    
                }
            }else{
                for(int j = v.size()-1; j>=0; j--)
                {
                    if(j != 0)
                    {
                        cout<<v[j]<<",";
                    }else{
                        cout<<v[j];
                    }
                    
                }
            }
            cout<<"]\n";
            
        }

    }

    return 0;
}
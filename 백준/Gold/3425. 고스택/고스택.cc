#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	
	string str;
	vector<string> ins;
	
	while (cin >> str)
	{
		if (str == "QUIT") break;
		
		if (str == "END")
		{
			int n;
			cin >> n;
			for (int j = 0; j < n; j++)
			{
				long long x;
				cin >> x;
				bool flag = false;
				vector<long long> v;
				v.push_back(x);
				for (int i = 0; i < ins.size(); i++)
				{
					if (ins[i] == "DUP")
					{
						v.push_back(v.back());
					}
					else if (ins[i] == "MUL")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						if (abs(x1 * x2) > 1000000000)
						{
							flag = true;
							break;
						}
						v.push_back(x1 * x2);
					}
					else if (ins[i] == "ADD")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						if (abs(x1 + x2) > 1000000000)
						{
							flag = true;
							break;
						}
						v.push_back(x1 + x2);
					}
					else if (ins[i] == "NUM")
					{
						v.push_back(stoll(ins[i+1]));
					}
					else if (ins[i] == "POP")
					{
						if (v.empty())
						{
							flag = true;
							break;
						}
						v.pop_back();
					}
					else if (ins[i] == "INV")
					{
						if (v.empty())
						{
							flag = true;
							break;
						}
						v[v.size() - 1] *= -1;
					}
					else if (ins[i] == "SWP")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						v.push_back(x1);
						v.push_back(x2);
					}
					else if (ins[i] == "SUB")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						if (abs(x2-x1) > 1000000000)
						{
							flag = true;
							break;
						}
						v.push_back(x2 - x1);
					}
					else if (ins[i] == "DIV")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						if (x1 == 0)
						{
							flag = true;
							break;
						}
						v.push_back(abs(x2) / abs(x1));
						if(x1 * x2 <0) v[v.size() - 1] *= -1;
					}
					else if (ins[i] == "MOD")
					{
						if (v.size() < 2)
						{
							flag = true;
							break;
						}
						long long x1 = v.back();
						v.pop_back();
						long long x2 = v.back();
						v.pop_back();
						if (x1 == 0)
						{
							flag = true;
							break;
						}
						v.push_back(x2 % x1);
						if (x2*v.back() < 0) v[v.size() - 1] *= -1;
					}
				}
				if (v.size() != 1 || flag)
				{
					cout << "ERROR" << "\n";
				}
				else
				{
					cout << v.back() << "\n";
				}
			}
			cout << "\n";
			ins.clear();
		}
		else
		{
			ins.push_back(str);
		}
	}
	


	return 0;
}
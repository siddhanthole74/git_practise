#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>words;
    int l; cin>>l;
    string p[l];
    for (int  i = 0; i < l; i++)
    {
        cin>>p[i];
        words.push_back(p[i]);
    }
    
    int n = words.size();
    vector<string> v;

    for(int i=0; i<n; i++)
    {
        int z = words[i].length();
        set<char>s;
        for(int j=0; j<words[i].length(); j++)
        {
            s.insert(words[i][j]);
        }
        
        string s0 = "";
        for(auto &it : s)
        {
            s0 += it;
        }
        v.push_back(s0);
    }

    sort(v.begin(),v.end());
    int y = v.size();
    long cnt = 0;
    for(int i=0; i<y; i++)
    {
        for(int j=i+1; j<y; j++)
        {
            if(v[i]==v[j])
            {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
}
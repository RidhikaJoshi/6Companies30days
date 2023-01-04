#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess)
    {
        unordered_map<int,int>m;
        for(int i=0;i<secret.length();i++)
        {
            m[secret[i]]++;
        }
        int b=0,c=0;
        for(int i=0;i<guess.length();i++)
        {
            if(secret[i]==guess[i])
            {
                b++;
                m[secret[i]]--;
            }
        }
       for(int i=0;i<guess.length();i++)
        {
                if(secret[i]!=guess[i] && m[guess[i]]!=0)
                {
                    c++;
                    m[guess[i]]--;
                }
        }
        string k="";
        k=k+to_string(b);
        k=k+'A';
        k=k+to_string(c);
        k=k+'B';
        return k;
    }
};
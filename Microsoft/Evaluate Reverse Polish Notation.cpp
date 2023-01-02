#include<bits/stdc++.h>
#include<string>
class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" &&  tokens[i]!="*" &&  tokens[i]!="/" )
                st.push(stoi(tokens[i]));
            else
            {
                int x=(st.top());
                st.pop();
                int y=(st.top());
                st.pop();
                int res=0;
                string s=tokens[i];
                 if(s=="+")
                       res=x+y;
                else if(s=="-")
                        res= y-x;
                else if(s=="*")
                        res= x*y;
                else
                    res=y/x;


                st.push(res);
            }
            
        }
        return st.top();
    }     
    
};
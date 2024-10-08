// <aside>
// 💡 **Question 1**

// Given two strings s and t, *determine if they are isomorphic*.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// **Example 1:**

// **Input:** s = "egg", t = "add"

// **Output:** true

// </aside>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter first string"<<endl;
    string s;
    cin>>s;
    cout<<"enter second string"<<endl;
    string t;
    cin>>t;
    if(s.size()!=t.size())
    cout<<"false";
    else
    {
        map<char,char>mp;
        for(int i=0;i<s.size();i++)
        {
            if(!mp[s[i]])
            {
                mp[s[i]]=t[i];
            }
            else 
            {
                if(mp[s[i]]!=t[i])
                {
                cout<<false;
                return 0;
                }
            }
        }
    }
        cout<<"true";
}

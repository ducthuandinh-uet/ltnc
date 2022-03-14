#include <iostream>
using namespace std;
int main()
{
    string s; getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='Z'&&s[i+1]=='u'&&s[i+2]=='e'&&s[i+3]=='s')
        {
            s[i+1]='e';
            s[i+2]='u';
        }
    }
    cout<<s;
    return 0;
    
    
}
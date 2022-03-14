#include <iostream>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int start=0;
    while(s[start]==' ') start++;
    for(int i=0; i<start; i++)cout<<" ";
    for(int i=start; i<s.size(); i++)
    {
       if (s[i]!=' ')
        {
            cout<<s[i];
        }
        else
        {
            cout<<" ";
            while(s[i]==' '&&s[i+1]==' ')i++;
        }
    }
    return 0;
    
    
}
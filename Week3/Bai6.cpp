#include <iostream>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int k=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==' ') k++;
    }
    cout<<k+1;
    return 0;
}
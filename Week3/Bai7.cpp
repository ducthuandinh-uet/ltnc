#include <iostream>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int chu=0, so=0, kt=0;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        chu++;
        else if(s[i]>='0' && s[i]<='9')
        so++;
        else kt++;
    }   
        cout<<chu<<" "<<so<<" "<<kt;
        return 0;
    
}
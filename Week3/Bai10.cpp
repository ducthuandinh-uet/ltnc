#include <iostream>
using namespace std;
int main()
{
    string s; cin>>s;
    bool check=true;
    if(s.size()>=6&&s.size()<=15)
    {
        if(s[0]>'9'||s[0]<'0')
        {
            for(int i=0; i<s.size(); i++)
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[0]>='0'&&s[i]<='9'))
                {
                    continue;
                }else{
                    check=false;
                    break;
                }
            }
        }else check=false;
    }else check=false;
    if(check==true)cout<<"Valid username.";
    else cout<<"Invalid username.";
    
    
    return 0;
    
    
}
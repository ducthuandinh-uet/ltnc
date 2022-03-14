#include <iostream>
using namespace std;
void input(int n, int a[]);

int main()
{
    int n; cin>>n;
    int a1[n], a2[n];
    bool Check = true;
    input(n, a1); input(n, a2);
    for(int i=0; i<n; i++)
    {
        if(a1[i]!=a2[i])
        {
            Check = false;
            break;
        }
    }
    if(Check==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}

void input(int n, int a[])
{
    for(int i=0; i<n; i++)
    cin>>a[i];
}
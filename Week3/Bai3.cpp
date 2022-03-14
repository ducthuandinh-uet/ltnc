#include <iostream>
#include <algorithm>
using namespace std;
void input(int n, int a[]);

int main()
{
    int n; cin>>n;
    int a[1000]; input(n, a);
    sort(a, a + n);
    for(int i=0; i<n; i++)
    if(a[i]!=a[i+1]) cout<<a[i]<<" ";
    else continue;
    return 0;

}

void input(int n, int a[])
{
    for(int i=0; i<n; i++)
    cin>>a[i];
}
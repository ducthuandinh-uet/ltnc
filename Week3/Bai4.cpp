#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void input(int n, double a[]);

int main()
{
    int n; cin>>n;
    double a[1000]; input(n, a);
    sort(a, a + n);
    double x; cin>>x;
    int i=0, temp;
    while(x>=a[i])
    {
        i++;
    }
    for(int j=n;j>i; j-- )
    {
        a[j]=a[j-1];
    }
    a[i]=x;


    for(int j=0; j<=n; j++)
    {
        cout<<setprecision(2)<<fixed<<a[j]<<" ";
    }
    return 0;

}

void input(int n, double a[])
{
    for(int i=0; i<n; i++)
    cin>>a[i];
}
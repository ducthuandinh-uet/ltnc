#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void input(int n, double a[]);

int main()
{
    int n; cin>>n;
    double a[1000]; input(n, a);
    sort(a, a + n, greater<double>());
    for(int i=0; i<n; i++)
    cout<<setprecision(2)<<fixed<<a[i]<<" ";
    return 0;

}

void input(int n, double a[])
{
    for(int i=0; i<n; i++)
    cin>>a[i];
}
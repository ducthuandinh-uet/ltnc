#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double low, up, low1, up1;
    cin>>low>>up;
    low1= sqrt(low); up1 = sqrt(up);
    for(int i=low1; i<=up1; i++)
    {
        if(i*i>=low&&i*i<=up) cout<<i*i<<" ";
        else continue;
    }
    return 0;
}
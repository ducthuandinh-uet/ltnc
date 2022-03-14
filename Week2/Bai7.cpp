#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, i = 1; cin>>x;
    double sum = 1, oldSum =0;
    double temp1=1;double temp2=1;
    while(sum-oldSum > 0.001)
    {
        oldSum = sum;
        temp1*=x;
        temp2*=i;
        sum+= temp1/temp2;
        i++;
    }
    cout<<setprecision(4)<<fixed<<sum;
    return 0;
}
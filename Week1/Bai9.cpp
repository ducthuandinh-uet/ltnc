#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    double a,b,c; cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b)
    {
        double p = (a+b+c)/2;
        double S = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<setprecision(2)<<fixed<<S;
    }
    else cout<<"invalid";
    return 0;
}
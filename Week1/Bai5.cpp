#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double C,F; cin>>C;
    F=C*1.8 +32;
    cout<<setprecision(2)<<fixed<<F;
    return 0;
}
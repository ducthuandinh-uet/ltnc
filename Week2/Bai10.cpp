#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAX_N = 1000;
    int n; cin>>n;
    double product = 0;
    double vectorA[MAX_N], vectorB[MAX_N];
    for(int i =0; i<n; i++) cin>>vectorA[i];
    for(int i =0; i<n; i++) cin>>vectorB[i];
    for(int i =0; i<n; i++) 
    product += vectorA[i] * vectorB[i];
    cout<<fixed<<setprecision(2)<<product;

    return 0;
}
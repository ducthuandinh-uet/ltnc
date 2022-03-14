#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    const int MAX_N = 1000;
    int n; cin>>n;
    double arrayX[MAX_N];
    double sum = 0;
    for(int i = 0;i<n; i++)
    {
        cin>>arrayX[i];
        sum+=arrayX[i];
    }
    double mean = sum/n;
    sum = 0;
    for(int i =0; i<n ; i++)
    {
        sum += pow((arrayX[i]-mean),2);
    }
    cout<<setprecision(2)<<fixed<<sum/n;
    
    return 0;
}
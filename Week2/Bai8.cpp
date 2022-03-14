#include <iostream>
using namespace std;
int main()
{
    long long n; int count=0;
    cin>>n;
    do{
        n%=10;
        count++;
    }while(n>=1);
    cout<<count;
    return 0;
}
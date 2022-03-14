#include <iostream>
using namespace std;
int main()
{
    int total, totalLegs, chick;
    cin >> total>>totalLegs;
    bool flag = false;
    for(int i = 0; i<=total; i++)
    {
        if(i*2+(total-i)*4 == totalLegs)
        {
            flag = true;
            chick = i;
            break;
        }
    }
    if(flag==true)cout<<"chicken = "<<chick<<", dog = "<<total - chick;
    else cout<<"invalid";
    return 0;
}
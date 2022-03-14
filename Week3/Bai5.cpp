#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int array[1000]; bool check = true;
    for(int i= 0; i<n; i++) cin>>array[i];
    for (int k = 0; k < n/2; k++) {
    if ( array[k] == array[n-1-k] ){
        continue;
    } else {
        check =false;
    }
}
    if(check == true) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
    
    return 0;
}
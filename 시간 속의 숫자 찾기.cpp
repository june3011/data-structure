#include <iostream>
using namespace std;
int main() {
    int n,res=0,i;
    cin >> n;
    for(i=1;i<=n;i++){
        if(i%10==3||i/10==3){
            res+=60*60;
        }
    }
    res+=1920*(n+1);
    cout << res;
    return 0;
}
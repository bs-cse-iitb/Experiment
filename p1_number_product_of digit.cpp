#include <iostream>

using namespace std;

int main(){
    
    int n,c=0,p=1,d;
    cin>>n;
    
    while(n>9){
        c++;
        p=1;
        while(n){
            d =n%10;
            p=p*d;
            n=n/10;
        }
        n=p;
        //cout<<p;
    }
    
    cout<<c;
    return 0;
}

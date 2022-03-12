#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char c2[100];
    char c[] = "XxYYyYzzabXCccc";
    int n = strlen(c);
    int i,x =1;
    
    for(i=0;i<n;i++){
        c[i] = tolower(c[i]);
        c[i+1] = tolower(c[i+1]);
        if(i==n-1){
            if(c[i]==c[i-1]){
                x+=1;
                if(x>1){
                    cout<<c[i]<<x;
                }
            }
            else{
                cout<<c[i];
            }
        }
        else{
            if(c[i]==c[i+1]){
                x++;
            }
            else{
                cout<<c[i];
                if(x>1){
                    cout<<x;
                }
                x=0;
            }
        }
    }
    //printf("Just");
    //cout<<c<<n;
    return 0;
}
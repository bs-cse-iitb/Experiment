#include <iostream>
#include<string.h>
using namespace std;

int lcs(char x[],char y[]){
    int m = strlen(x);
    int n =strlen(y);
    int i,j;
    int arr[m+1][n+1];
    
    for(i =0; i< m+1; i++){
        for(j=0; j<n+1;j++){
                arr[i][j]=0;
        }
    }
    for(i =1; i< m+1; i++){
        for(j=1; j<n+1;j++){
            //cout<<arr[i][j]<< " ";
            //cout<<x[i-1]<<y[j-1];
            if(x[i-1]==y[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else{
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    
    return arr[m][n];
    
}

int main()
{
    char x[100], y[100];
    cin>> x;
    cin>> y;
    
    cout<<lcs(x,y);

    return 0;
}

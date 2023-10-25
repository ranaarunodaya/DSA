#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of rows."<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int start=i+1;
        int thirdPart=2*i;
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<start;
            start=start+1;
        }
        for(int l=0;l<i;l++){
            
            cout<<thirdPart;
            thirdPart=thirdPart-1;

        }
        cout<<endl;
    }
    
    return 0;
}
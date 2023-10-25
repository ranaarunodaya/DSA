#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of row?"<<endl;
    cin>>n;
   
   for(int i=0;i<n;i++){
    if(i<n-1){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    
    for(int k=0;k<i+1;k++){
         if(k==0 || k==i)
         {
           cout<<k+1<<" ";
         }
         else{
            cout<<"  ";
         }
         
       }
    }
    else{
        for(int j=0;j<n;j++){
            cout<<j+1<<" ";
        }
    }
      cout<<endl;
    }
    
    return 0;
   }

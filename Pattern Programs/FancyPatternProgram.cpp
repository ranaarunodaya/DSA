#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter number of rows."<<endl;
  cin>>n;

  for(int i=0;i<n;i++){
    
    int count=0;
    for(int j=0;j<i+1;j++){
       count++;
        cout<<i+1;
    }
    count--;
    // cout<<count;
     for(;count>=1;count--){
        cout<<count;
     }
    cout<<endl;
  }
    return 0;
}
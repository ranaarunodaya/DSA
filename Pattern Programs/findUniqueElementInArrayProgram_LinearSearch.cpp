#include<iostream>
#include<vector>

using namespace std;
int main(){
  
  vector<int> arr{1,1,2,4,3,5,3,4,5};   
  int ans=0;
  
  for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
  }

  cout<<"Unique element is :"<<
  ans<<endl;
    return 0;
}
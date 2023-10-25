#include<iostream>
#include<vector>
using namespace std;

int main(){
   
   int arr[]={1,3,5,7,9};
   int arrSize = end(arr)-begin(arr);
   cout<<arrSize<<endl;
   int brr[]={0,2,4,6,8};
   int brrSize= end(brr)-begin(brr);
   cout<<brrSize<<endl;

  vector<int> ans;
  for(int i=0;i<arrSize;i++){
    ans.push_back(arr[i]);
  }
  for(int i=0;i<brrSize;i++){
    ans.push_back(brr[i]);
  }

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
    return 0;
}

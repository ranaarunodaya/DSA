#include<iostream>
#include<vector>

using namespace std;

int main(){
  // vector is an dynamic array
  vector<int> arr;

  int ans = (sizeof(arr)/sizeof(int));
  cout<<ans<<endl;

  //What is the total capacity of the vector ?
  cout<<"Capacity :"<<arr.capacity()<<endl;
  // What is the size of the vector (lenth of the vector)
  cout<<"Size :"<<arr.size()<<endl;

  // insert elements in vector array
  arr.push_back(5);
  arr.push_back(6);
  cout<<"size: "<<arr.size()<<endl;
 
 // print elements in array vector
  for(int i=0;i<arr.size();i++){
    cout<<"Elemts after push back :"<<arr[i]<<endl;
  }

  // remove/delete the elemets from the vector array
  arr.pop_back();

 // print elemts after vector pop back fucntion
  for(int i=0;i<arr.size();i++){
    cout<<"After pop back :"<<arr[i]<<endl;
  }


 /* What  to create a vector of size 10 ?*/

 // vector<int> brr(10);
//   cout<<"Size of vector brr:"<<brr.size();

  /*what default value does the above vector contains*/
//   for(int i=0;i<brr.size();i++){
//     cout<<"BRR vector default values:"<<brr[i]<<endl;
//   }

  /* Now i want to intialize the vector with the value -1 on all 
   10 places ?*/
//   vector<int> brr(10,-1);
//     for(int i=0;i<brr.size();i++){
//     cout<<brr[i];
//   }


/*Dynamically take the input into the vector*/
int n;
cout<<"Enter the value ?"<<endl;
cin>>n;
vector<int> dynamicVecArr(n,-101);

for(int i=0;i<dynamicVecArr.size();i++){
    cout<<dynamicVecArr[i];
}

    return 0;
}
#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int main(){
   int arr[5]={1,7,9,10,3};
   int key;
   int arrSize=5;
   cout<<"Enter the number you want to find in an array ?"<<endl;
   cin>>key;
 
   if(find(arr,arrSize,key)){
     cout<<"The value is present in Array."<<endl;
   }  
   else{
    cout<<"Value is not present."<<endl;
    cout<<"Try again !!!"<<endl;
   } 
    return 0;
}
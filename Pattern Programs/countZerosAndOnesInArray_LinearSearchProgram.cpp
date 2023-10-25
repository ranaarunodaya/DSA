#include<iostream>
using namespace std;

void countZerosAndOnes(int arr[],int size){
   
   int onesCount=0;
   int zerosCount=0;
    for(int i=0;i<size;i++){
         if(arr[i] == 1){
            onesCount++;
         }
         else if(arr[i] == 0){
            zerosCount++;
         }
    }
    cout<<"The number of 1's in Array is :"<<onesCount<<endl;
    cout<<"The number of 0's in Array is :"<<zerosCount<<endl;
}

int main(){
   
   int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
   int size=15;

   countZerosAndOnes(arr,size);
    return 0;
}
#include<iostream>
#include<limits.h>
using namespace std;

int findMaxNum(int arr[],int size,int maxNum){
    
    for(int i=0;i<size;i++){
        if(maxNum < arr[i]){
            maxNum = arr[i];
            
        }
    }
    return maxNum;
}

int main(){
   int arr[11] ={2,4,6,1,3,7,9,12,56,43,21};
   int arrSize=11;
   int maxNum = INT_MIN;

   maxNum = findMaxNum(arr,arrSize,maxNum);

   cout<<"Maximum value in the array is :"<<maxNum<<endl;


    return 0;
}
#include<iostream>
using namespace std;
int main(){
  
  int rows;
  int cols;
  cout<<"Enter the number of rows ?"<<endl;
  cin>>rows;
  cout<<"Enter the number of columns ?"<<endl;
  cin>>cols;
  for(int i=0; i<rows;i++){
    for(int j=0; j<cols-i;j++){
        cout<<"* ";
    }
    cout<<endl;
  }
    return 0;
}
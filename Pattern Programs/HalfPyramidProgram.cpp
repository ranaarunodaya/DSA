#include<iostream>
using namespace std;
int main(){
   int row;
   int col;
   cout<<"Enter the number of rows ?"<<endl;
   cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0; j<=i;j++){
            if(j==i || j<i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }


    return 0;
}
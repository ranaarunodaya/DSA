#include <iostream>
using namespace std;
int main(){
int rows;
int columns;
cout<<"Enter the number of rows ?"<<endl;
cin>>rows;
cout<<"Enter the number of columns ?"<<endl;
cin>>columns;

for(int i=0;i<rows;i++){
       if(i == 0 || i == rows-1) {
        for(int j=0;j<columns;j++){
           cout<<"* "; 
        }
        
       }
       else{
        cout<<"* ";
        for(int j=0;j<columns-2;j++){
            cout<<"  ";
        }
        cout<<"* ";
       
       }
      cout<<endl;
       
    }

return 0;
}
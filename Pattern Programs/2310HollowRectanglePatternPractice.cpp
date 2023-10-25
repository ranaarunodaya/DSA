#include<iostream>
using namespace std;
int main(){

    int rowCount,colCount;
    cout<<"Enter the number of rows"<<endl;
    cin>>rowCount;
    cout<<"Enter the number of coloumns"<<endl;
    cin>>colCount;
  
    for(int row=0;row<rowCount;row++){
        
        if((row == 0 || row == rowCount-1)){
         
        for(int col=0; col<colCount ; col++)
        {
        
            cout<<"* ";
         
        }
        }else{
             for(int col=0;col<colCount ;col++){

                if(col ==0 || col==colCount-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
             }
            
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;


/*  part of fucntion Exmple-15*/
// void car{
//     cout<<"Audi A8"<<endl;
//   }

/* part of function example 16*/
// int fun(int x=0,int y=0,int z){
//   return (x+y+z);
// }

/*part of function Example 17 */
// int fun(int =0,int =0);
int main(){
   // example 1
    // int a=10;
    // int b,c;
    // b=a++;
    // c=a;
    // cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
    // return 0;
  //---------------example 2
    // int i=0;
    // label:
    // cout<<"hello,ji";
    // i++;
    // if(i<3){
    //     goto label;
    // }
    //===============example 3
    // int a=6;
    // int b=0;
    // int c=6/0;
    // cout<<"c:"<<c;
    // return 0;
    //==============example 4
    // int i =(1,2,3,4);
    // cout<<i;

    //==============exaple 5
    // double x=1.2;
    // int sum=(int)x+1;
    // cout<<"Sum:"<<sum;
    // return 0;
  
  
  //  Quiz-2 
  //     Example 6 -- Goodbye
  //   if(0){
  //     cout<<"hello"<<endl;

  //   }
  //   else{
  //     cout<<"GoodBye"<<endl;
  //   }


 //  Example 7 (543)
//  for(int i=5 ;i>0;i--){
//   cout<<i;
//   if(i==3){
//     break;
//   }
//  }

//  Example 8 -- Compile time error(time not declared,n not declared,breal cannot be used)
// int a=10;
// if(a=15){
 //     time;
//   cout<<a;
//   if(n==3){
    // break;

//   }
      
// }

//  Example 9 -- Infinite loop
// int n=15;
// for(;;){
//   cout<<n
// }

// Example -10 ---> 0123456789
//  int i;
//  for(i=0;i<10;i++){
//   cout<<i;
//  }

// Example -11 ----> 7
//  int a=2;
//  int b=7;
//  int c=(a>b)?a:b;
//  cout<<c<<endl;


// Example -12 --> true
//  int a=0;
//  int b=10;
//  a=2;
//  b=7;
//  if(a&&b){
//   cout<<"true"<<endl;
//  }
//  else{
//   cout<<"false"<<endl;
//  }

// Example -13  -- vimp -- c=5 and d=6
//  int a=5,b=6,c,d;
//  c=a,b;
//  d=(a,b);
//  cout<<c<<"c"<<endl;
//  cout<<d<<"d"<<endl;

// Example -14 -Explanation: j starts with the value 10. j is then incremented to 11. Next, j is added to 100. 
//Finally, j (still containing 11) is added to 999 which yields the result 1010.
// int i,j;
// j=10;
// i=(j++,j+100,999+j);
// cout<<i;  

// Example -14 - x=7,y=49 then, x=7* x=8 so, 8*8=64
// int x,y;
// x=5;
// y= ++x * ++x;
// cout <<"x:"<<x<<"y:"<<y<<endl;

// y=x++ * ++x;
// cout <<"x:"<<x<<"y:"<<y;


// Example -14 --> 50
    //  int a=20,b=10,c=15,d=5;
    //  int e;
    //  e=a+b*c/d;
    //  cout<<e<<endl;
  
  // Example -15  ---> function decalartion not correct (Error)
  
  // car();


  
  // Example -16  ---> error because 10 will be x so z default value not defined
   
  //  cout<<fun(10);



  // Example -17 (Decalarion up & implmentation below)  --->5
  //  cout<<fun(5);



  // Example -18 -Output -> 6-601(Explanation says if First input is 1 then output is 1. 
  //So ++a is executed then a=6 then && b=-7+1=-6 which is both values present then || since we already got both input as 6 and -6  so it stops evaluation )
  // int a=5,b=-7,c=0,d;
  // d= ++a && ++b || ++c;
  // cout<<a<<b<<c<<d;
  
/*  --------------------------------------Justfication for Example 18-------------------------------------
 Just try to imagine it with parentheses:
 ++a || ++b && ++c;
equals
 (++a) || (++b && ++c);
which is evaluated from left to right and || being the logical OR, if the first operand is non-zero, 
second operand won't be evaluated due to short circuit rule in C.
if && and || would have the same precedence, it would look like
(++a || ++b) && (++c); 
Here, the second operand won't be evaluated if the first operand returns 0.
PS: Precedence just give the operands for operations (like giving paratheses). Actual execution order is not specified here and depends on the language semantics. 
 */
  //  int a=-1,b=-1,c=1,d;
  // d= ++a && ++b || ++c;
  // cout<<a<<b<<c<<d;


  //int a = 4,b = 5,c = 6;
  // int k = ++a || ++b && c++;
   
   // Example - 18 
  //  int a=-5;
  //  int k =(a++,++a);
  //  cout<<k<<endl;
   

   // example - 19

  //  if(~0 ==1){
  //   cout<<"yes"<<endl;

  //  }
  //  else{
  //   cout<<"no";
  //  }

   // Example - 20
  //  int x=-2;
  //  if(!0 ==1){
  //   cout<<"yes"<<endl;

  //  }
  //  else{
  //   cout<<"no";
  //  }
  
  // Example - 21
  // int y=0;
  // if(1| (y=1)){
  //   cout<<"yes"<<endl;
  // }
  // else{
  //   cout<<"No"<<endl;
  // }
   
   // Example-22
  //  int y=1;
  //  if(y & (y=2)){
  //   cout<<"yes"<<y<<endl;
  //  }
  //  else{
  //   cout<<"No"<<y<<endl;
  //  }


  // Example - 23
  //  int a=10,b=5,c=5,d;
  //  d= c +b == a;
  //  cout << d<<endl;

  // Example - 24
  /*Explanation:!= is a relational operator. It is just used to check the values of both the operands,
  there it just checks with b and !a that means it does not change the value of b
    And in next ! Is logical operator and it reverse the value of operand i.e 
    if it is true it become false and vice versa here 1st !a makes a false I.e 
    0 next !a makes it 1 that is c=1*/
//   int  a=10,b=5,c=3;
//  if( b != !a){
//   cout << "true";
//  }

//   cout<<a<<":a:"<<endl;
//   c=!!a;
  
//   cout<<"!a:"<<!a<<endl;
//   cout<<a<<b<<c;


//  Example -25   ->B
 /*
 The output of above program is “4 8 4” on a typical C compiler. 
 It actually prints size of float, size of double and size of float.
 The values used in an expression are considered as double (double precision floating point format
 unless a ‘f’ is specified at the end. So the expression “x==0.1″ has a double on right side and 
 float which are stored in a single precision floating point format
 */
  // float x=0.1;
  // //if(x== 0.1f){  // out will be 'A' if we use this condition instead of below
  //   if(x==0.1){
  //   cout<<"A";
  // }
  // else{
  //   cout<<"B";
  // }
    


    // Example - 26  ----> output will be 1 as this is 2XOR3
    // int c = 2^3;
    // cout<<c<<endl;

    //example -27  ---> output is x=97
    /*
    Reason -https://www.geeksforgeeks.org/why-does-sizeofx-not-increment-x-in-c/
    */
    // int x=97,y;
    // y= sizeof(x++);
    // cout<<y<<endl;
    // cout<<x<<endl;

    // example- 28
    // int a=3;
    // switch(a){
    //   case 2: cout<<"zero";
    //   break;
    //   case default : cout<<"Rabbit";
    // }

    //example -29
    // int a;
    // switch(a){
    //  cout<<"Lion";
    // }
    // cout<<"MySwitch"<<endl;
    return 0;

}
/*Part of fucntion example 17*/
// int fun(int x,int y){
//   return (x+y);
// }
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int row, col;
   cin>>row>>col;
   
   for(int i=1;i<=row;i++){
       for(int j=1;j<=col;j++){
           if(i==1 || i==row){
               cout<<"*";
           }
           else if(j==1 || j==col){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
       }
       
       cout<<endl;
   }
    return 0;
}

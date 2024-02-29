/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<100;i++)
  {
      if(i%3==0){
          continue;
          
      }
      cout<<i<<endl;
  }

    return 0;
}

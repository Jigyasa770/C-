/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Input 2 Numbers: ";
    cin>>n1>>n2;
    
    char op;
    cout<<"Input an operator: ";
    cin>>op;
    
    switch (op)
    {
        case '+':
            cout<<n1+n2<<endl;
            break;
        
        case '-':
            cout<<n1-n2<<endl;
            break;
            
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
            
        default:
            cout<<"Enter Another operator:"<<endl;
            cin>>op;
            break;
    }

    return 0;
}

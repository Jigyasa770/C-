/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a Character: ";
    cin>>button;
    
    switch(button)
    {
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Namaste"<<endl;
            break;
        case 'c':
            cout<<"Hola"<<endl;
            break;
        case 'd':
            cout<<"Ciao"<<endl;
            break;
        case 'e':
            cout<<"Salut"<<endl;
            break;
        default:
            cout<<"I am still learning more"<<endl;
            break;
    }
    
}

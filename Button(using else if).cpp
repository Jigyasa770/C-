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
    
    if (button=='a'){
        
        cout<<"Hello"<<endl;
    
    }
    else if(button=='b'){
        
        cout<<"Namaste"<<endl;
    }
    else if(button=='c'){
        
        cout<<"Salut"<<endl;
    }
    else if(button=='d'){
        
        cout<<"Hola"<<endl;
    }
    else if(button=='e'){
        
        cout<<"Ciao"<<endl;
    }
    else{
        cout<<"I'm still learning"<<endl;
    }

    return 0;
}

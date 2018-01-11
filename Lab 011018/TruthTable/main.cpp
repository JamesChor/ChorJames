/* 
 * File:   main.cpp
 * Author: Chor, James
 * Created on January 11 2018, 1:15 PM
 * Purpose:  Create a truth table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y; 
    
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
        <<" !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl; 
    
    //first row 
    x=true; 
    y=true;
    cout<<(x?'T':'F')<<" "; 
    cout<<(y?'T':'F')<<"  "; 
    cout<<(!x?'T':'F')<<"  "; 
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    "; 
    cout<<(x||y?'T':'F')<<"    "; 
    cout<<(x^y?'T':'F')<<"    "; 
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"       "; 
    cout<<(!x||!y?'T':'F')<<"      "; 
    cout<<(!(x||y)?'T':'F')<<"       "; 
    cout<<(!x&&!y?'T':'F')<<"    "; 
    cout<<endl; 
    
    //second row 
    x=true; 
    y=false;
    cout<<(x?'T':'F')<<" "; 
    cout<<(y?'T':'F')<<"  "; 
    cout<<(!x?'T':'F')<<"  "; 
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    "; 
    cout<<(x||y?'T':'F')<<"    "; 
    cout<<(x^y?'T':'F')<<"    "; 
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"       "; 
    cout<<(!x||!y?'T':'F')<<"      "; 
    cout<<(!(x||y)?'T':'F')<<"       "; 
    cout<<(!x&&!y?'T':'F')<<"    "; 
    cout<<endl; 
    
    //third row 
    x=false; 
    y=true;
    cout<<(x?'T':'F')<<" "; 
    cout<<(y?'T':'F')<<"  "; 
    cout<<(!x?'T':'F')<<"  "; 
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    "; 
    cout<<(x||y?'T':'F')<<"    "; 
    cout<<(x^y?'T':'F')<<"    "; 
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"       "; 
    cout<<(!x||!y?'T':'F')<<"      "; 
    cout<<(!(x||y)?'T':'F')<<"       "; 
    cout<<(!x&&!y?'T':'F')<<"    "; 
    cout<<endl; 
    
    //fourth row 
    x=false; 
    y=false;
    cout<<(x?'T':'F')<<" "; 
    cout<<(y?'T':'F')<<"  "; 
    cout<<(!x?'T':'F')<<"  "; 
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    "; 
    cout<<(x||y?'T':'F')<<"    "; 
    cout<<(x^y?'T':'F')<<"    "; 
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"       "; 
    cout<<(!x||!y?'T':'F')<<"      "; 
    cout<<(!(x||y)?'T':'F')<<"       "; 
    cout<<(!x&&!y?'T':'F')<<"    "; 
    cout<<endl; 
    
    cout<<fixed;
   

    //Exit
    return 0;
}


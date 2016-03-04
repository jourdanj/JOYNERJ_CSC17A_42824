/* 
 * File:   main.cpp
 * Author: Jourdan
 * Created on March 3, 2016, 10:51 PM
 * Purpose: Gaddis Problem 4.10
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//user libraries

//global constants

//function prototypes
void calculator(int);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char ans;
    do{
        
        int  num=0;
        
        cout<<"Please enter number of units sold.\n";

        while(num<0||num==0){

            cin>>num;

            if(num<0||num==0){
                cout<<"Enter number greater than zero.\n";

            }
        }

        calculator(num);
        
        cout<<"Again?(y/n)\n";
        cin>>ans;
    }while(ans=='y'||ans=='Y');
    
    return 0;
}
void calculator(int num){
    
    int tcost=0;
    int a=0;
    
    a=num*99.0f;
   
    tcost=a;
    
    cout<<tcost<<endl;

    if(num>9&&num<20){
        
       tcost=a*0.80f;
    }
    if(num>19&&num<50){
       tcost=a*.70f;
    }
    if(num>49&&num<100){
       tcost=a*.60f;
    }
    if(num>99){
       tcost=a*.50f;
    }
    
    cout<<"Total Cost: $"<<tcost<<endl;
    
    return;
}

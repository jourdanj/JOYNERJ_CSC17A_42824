/* 
 * File:   main.cpp
 * Author: Jourdan
 * Purpose: Gaddis 4.8- create a change counting game
 * Created on March 4, 2016, 2:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char ans;
    do{
       
        float count=0.00f;
        
        cout<<"Make a Dollar!\n";
        cout<<"Add up the change to make a dollar\n";

        
        do{
            int c=0;
            
            do{
                cout<<"Enter 1 for Pennies, 2 for Nickels, \n";
                cout<<"3 for Dimes, and 4 for Quarters\n";
                cin>>c;
            }while(c<1||c>4);
                

            while(c==1){
                count+=0.01f;
                c=0;
            }
            while(c==2){
                count+=0.05f;
                c=0;
            }
            while(c==3){
                count+=0.10f;
                c=0;
            }
            while(c==4){
                count+=0.25f;
                c=0;
            }
            cout<<"Current count: $"<<fixed<<setprecision(2)<<count<<endl;

        }while(count<1.00f);
        while(count==1.00f){
            
            cout<<"You did it, Congrats~\n";
            cout<<"Play again? (y)\n";
            cin>>ans;
            count=0;
        }
        while(count>1.00f){
            
            cout<<"Bust. You Lose\n";
            cout<<"Play again? (y)\n";
            cin>>ans;
            count=0;
        }
        
    }while(ans=='y'||ans=='Y');
    
    return 0;
}


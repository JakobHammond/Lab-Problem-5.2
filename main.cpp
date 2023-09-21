//
//  main.cpp
//  p5-2
//
//  Created by Jakob Hammond on 9/21/23.
//

#include <iostream>
using namespace std;

int main(void){
    int smallestValue = 99999;
    int largestValue = 0;
    int evenNumCount = 0;
    int oddNumCount = 0;
    bool hasQuit = false;
    int currentValue;
    
    while(hasQuit == false){
        
        cout << "Enter number or Q to quit: ";
        cin >> currentValue;
        //check if quit
        if(cin.fail()){
            hasQuit = true;
        }
        //take value
        else{
         
            //check if smallest
            if(currentValue < smallestValue){
                smallestValue = currentValue;
            }
            //check if largest
            if(currentValue > largestValue){
                largestValue = currentValue;
            }
            //check if even or odd
            if(currentValue % 2 == 0){
                evenNumCount++;
            }
            else{
                oddNumCount++;
            }
        }
        
        
    }
    cout << "Largest value: " << largestValue << " Smallest value: " << smallestValue << "\nEven number count: " << evenNumCount << " Odd number count: " << oddNumCount << endl;
    
}

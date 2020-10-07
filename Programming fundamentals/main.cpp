//
//  main.cpp
//  Programming fundamentals
//
//  Created by Afaq Ahmed on 07/10/2020.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    /// Escape sequences.
    // \"
    // \n
    // \b
    
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    cout << "Your entered \"" << name << "\"" ;
    
    ///  Logical operators
    //   And (&&)
    //   Or (||)
    //   Not (!)
    ///  Relational operators // comparision operator
    //   less than (<) // 8 < 7 false
    //   greater that (>) // 7 > 8 false
    //   less than and equal (<=)
    //   greater than or equal (>=)
    //   is equal to (==) // 4==4 true
    //   Ternary operator (:?)
    
    ///  Control Strucrture
    //   Sequential control
    //   conditional
    //   loop
    
    ///  Conditional
    //   |
    //   if statement
    //   if else
    //   if else-if
    ///  Unconditional transfer of control
    //   goto
    
    ///  Syntax of if statement
    
//    if (condition) {
        // s1
        //s2
//    }
    
//    if ( (4) > 5)
//        cout << "Hello";
    
    ///  Syntax if else
//    if (condition) {
//
//    }else {
//
//    }
    
//    if (4 < 5)
//        cout << "HEllo";
//    else
//        cout << "Hello23";
    
    ///  Syntax if else if
    
//    if (condition){
//
//    }else if (condition){
//
//    }else if (condition){
//
//    }else{
//
//    }
    
    int marks;
    
    //  marks >= 48 // grade A
    //  marks >= 38 // grade B
    //  marks >= 32 // Grade C
    //  marks >= 24 // Grade D
    //  marks < 24 // Fail
    
    cout << "Enter marks : ";
    ishma:
    cin >> marks;
    
    if (marks > 60){
        cout << "You entered incorrect marks";
        cout  << "\nEnter Marks again: ";
        goto ishma;
    }
    
//    int PTVFee = 35;
//    
//    int unit;
//    int cost_of_electricity;
//    
//    if (unit < 100)
//        cost_of_electricity = unit * 10;
//    else if(unit >= 100){
//        int temp = unit - 100;
//        cost_of_electricity =  100 * 10;
//        cost_of_electricity = (cost_of_electricity) + (temp * 20);
//    }
    
    
    if (marks >= 48)
        cout << "Grade A";
    else if (marks >= 38)
        cout << "Grade B";
    else if (marks >= 32)
        cout << "Grade C";
    else if (marks >= 24)
        cout << "Grade D";
    else
        cout << "Fail";
    
    
    
    
    return 0;
}

//
//  main.cpp
//  Programming fundamentals
//
//  Created by Afaq Ahmed on 07/10/2020.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    /// Variable declaration
    
    // Data types
    // Permitive/default data types
    // |
    // - int -- 4 bytes
    // - long int -- 8 byte
    // - unsigned int - 2 bytes
    // - float -- 4 bytes
    // - char -- 1 byte
    // - bool -- byte
    // - double -- 8 byte
    
    /// Rules for naming variable.
    // |
    // first letter cannot be numerical
    // first letter can be _ or alphabet
    // special characters are not allowed
    // variable cannot contain spaces
    // permitive can not be used.
    
    int variable1; // allowed
    // int 1variable; // not allowed
    // int vari able // not allowed i.e. it cannot have space between the words
    // int double // not allowed.
    
    int variable2;  /// variable declaration
    
    variable2 = 10; /// variable intialization
    
    /// << <- insertion operater
    
    cout << variable2 << endl; // printing on console
    
    // "any thing between quotation is string"
    
    cout << "Enter number: ";
    /// >> -> extraction operator
    cin >> variable1; // getting input from user from console
    
    cout << "Variable 1: " << variable1 << " Variable 2: " << variable2 << endl;
    
    /// Arithmetic operators (*,/,+,-,%)
    
    cout << "Addition : " << variable1 + variable2 << endl;
    cout << "Multiplication : " << variable1 * variable2 << endl;
    cout << "Subtraction : " << variable1 - variable2 << endl;
    cout << "Division : " << variable1 / variable2 << endl;
    cout << "Remainder : " << variable1 % variable2 << endl;
    
    int variable3 = variable1 + variable2;
    
    cout << "Addition: " << variable3 << endl;
    
    return 0;
}

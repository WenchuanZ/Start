#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    // boy i love baconand ham
    // boy i love bacon and ham
    
    
    cout << "boy i love bacon";  
    cout << "and ham" << endl; 

    cout << "boy i love bacon ";
    cout << "and ham" << endl;
   
   // You can also use '\n' to start a new line.
   // boy i love bacon 
    //
   // and ham
    cout << "boy i love bacon \n \n";
    cout << "and ham \n";


   // variables 
    int tuna = 6; // 'int' decide the type of variable
    cout << tuna << endl;

    int a = 4;
    int b = 21;
    int sum = a + b; // 25
    cout << sum << endl;


   //declaring the variable (input command): u don't need to assign the number when creating variables
    int d; 
    int e;          // canot assign the type to the variable which has already been assigned 
    int sum_1;

    cout << "Enter a number hoss! \n"; // 'cout' takes the info of computers to users
    cin  >> d;                         // 'cin' takes the info of users to computers and assign value to a;
                                      // ">>": stream exaction extraction operator
   
    cout << "Enter another number \n";
    cin >> e;

    sum_1 = d + e;
    cout << "the sum of those numbers is " << sum_1 << endl;




    // arithmetic

    int x; // create an integer
    x = 81 / 2;
    cout << x << endl; // return 40 since it is an integer
    cout << 81 % 2 << endl; // return 1, % here is modulo. 

    return 0; 
} 

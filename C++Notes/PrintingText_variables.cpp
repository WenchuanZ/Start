#include <iostream> // -> preprocessor directive: including a file i/o stream (input, output streams)that our program needs to use later 
                           

using namespace std;     // std: standard library 
                         // tabs, blank lines and spaces just make ur programe more readable

int main()  // 'int' indicates what type of data u are working with (integers here); 'main' determines the exercution order of function: usually strating from main functions       
                                     // -
{                                    //  |
    cout << "Hello world!" << endl;  //  |
    /** 'cout' here: C out, the ALPA
    object; output stream                |
    operator; usually with a pair of     |
    conjunction charecters
        '<<  <<':the stream insertion
    operator;
        'endl': end line; go to the      .
    next line        */                //.-------> Function: consists of statements, must end with ';'
                                       //.

    return 0;
    /** 'return 0': used to check       |
    the previous 'print sth'            |
    excuation line is correct or        |
    not  */                          // |

}                                    // -



/** If you add two stars at the begining of the form, you will get a bold version*/

/* One star at the begining will only give you this sort of unclear comment*/

/** You can also break
into a new line  */

// This character also work but it will fail when breaking the comment into a new line







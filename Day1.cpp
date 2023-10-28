/*Topics covered
1.) commnets
2.) basic syntax of c++
3.) endl and \n
4.) Data types
5.) Variables
6.) Input and output
7.) Conditional statements
8.) Loops
*/


/*Comments are written to provide clear and efficient explanation of code. 
Multiline comments in C++ are enclosed between /* 
single line comments are represnted by //

#include<iostream>
using namespace std;
int main ()
{
    cout <<"Day1";
     return 0;
}
output:Day1

#include <iostream>: This preprocessor directive includes the <iostream> header, which provides 
input and output functionality. It allows you to use input and output streams like cin for input
and cout for output.
using namespace std;: This line simplifies your code by indicating that you're using the
std (standard) namespace. The std namespace contains various C++ standard library functions and 
objects, including the cout object for output. It enables you to use cout directly without the 
need to prepend std:: before it.

#include<iostream>
int main ()
{
    std::cout << "Hello World"<<"\n";
    std::cout<<"Hello World"<<std::endl;
    std::cout <<"Hello world";
     return 0;
}
output:Hello World
Hello World
Hello world
Instead of writing std for each line we write using namespace std::
\n is a simple newline character, while endl inserts a newline and flushes the output buffer.
For more understanding refer this video  https://youtu.be/yfI3_IxV_Ag?si=CEJJZ0mI8NWIXmSe 

Data types
int: Used for integer values, such as 12, 23, and -34.The size of an int can vary depending on 
the compiler and platform.
long: A data type for longer integer values. The size of long is platform-dependent and can be
larger than an int.
float: Represents floating-point numbers, e.g., 5.3. Typically, it is a 32-bit floating-point type.
double: Used for double-precision floating-point numbers. It has more significant digits and
is usually a 64-bit type.
char: Stores single characters, including lowercase letters (a to z), uppercase letters (A to Z), 
digits, symbols, and control characters.
boolean (bool): Represents true or false values. In C++, it is denoted as bool, and values are 
true and false.
sizeof: An operator in C++ used to determine the size, in bytes, of a data type or an object.
#include <iostream>
using namespace std;
int main() {
    int integerVariable = 42;
    long longVariable = 1234567890;
    float floatVariable = 5.3;
    double doubleVariable = 12.345;
    char characterVariable = 'A';
    bool booleanVariable = true;

    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    cout << "Size of bool: " << sizeof(bool) << " bytes\n";

    cout << "Value of int: " << integerVariable <<endl;
    cout << "Value of long: " << longVariable <<endl;
    cout << "Value of float: " << floatVariable <<endl;
    cout << "Value of double: " << doubleVariable <<endl;
    cout << "Value of char: " << characterVariable <<endl;
    cout << "Value of bool: " << booleanVariable <<endl;

    return 0;
}
output: 
Size of int: 4 bytes
Size of long: 8 bytes
Size of float: 4 bytes
Size double: 8 bytes
Size of char: 1 bytes
Size of bool: 1bytes
Value of int: 42
Value of long: 1234567890
Value of float: 5.3
Value of double: 12.345
Value of char: A
Value of bool: 1

Type Modifiers:
long: Used to modify integral data types like int, increasing their storage size.
short: Reduces the storage size of integral data types.
unsigned: Used with integral data types to indicate that only positive values are stored.
signed: Default modifier, allows both positive and negative values for integral data types.

Variables
Declaring--> datatype name;
ex: int a;
float b;
name=value;
Initilisation datatype name=value;
variable values can be changed
char x='&'
later x can be changed as x='*'
literals are the values that are being stored 
int a=5;
a is a variable and 5 is a literal

Input and output
cin>> is used to take input from the user(keyboard)
cout<< is used to provide the output on the screen
#include <iostream>
using namespace std;
int main() {
    int a;
    double b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a decimal number: ";
    cin >> b;
    cout << "You entered the integer: " <<a<< endl;
    cout << "You entered the decimal number: " <<b<< endl;
    return 0;
}
Conditional statements
1.) if Statement:
#include <iostream>
using namespace std;

int main() {
    int age = 25;

    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}
2.) else if Statement:
#include <iostream>
using namespace std;

int main() {
    int score = 85;

    if (score >= 90) {
        cout << "You got an A." << endl;
    } else if (score >= 80) {
        cout << "You got a B." << endl;
    } else if (score >= 70) {
        cout << "You got a C." << endl;
    } else {
        cout << "You got a D or below." << endl;
    }

    return 0;
}
3.) Switch Statement:
#include <iostream>
using namespace std;
int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Very good!" << endl;
            break;
        case 'C':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Needs improvement." << endl;
    }

    return 0;
}

Loops
1.) for
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }

    return 0;
}

2.)while
#include <iostream>
using namespace std;
int main() {
    int i = 1; 
    while (i <= 5) { 
        cout << "Number: " << i << endl;
        i++; 
    }

    return 0;
}
3.)do while
#include <iostream>
using namespace std;
int main() {
    int i = 1; 
    do {
        cout << "Number: " << i << endl;
        i++; 
    } while (i <= 5); 

    return 0;
}
*/ 

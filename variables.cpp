//variables
#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2;
    
    // Assigning num1's value to num2
    num2 = num1;
    cout << num1 << " " << num2;
    return 0;
}
//-------------------------------------------------------------------
//constant variable
//SYNTAX:-const DATATYPE variable_name = value;
#include <iostream>
using namespace std;
int main() {
    const int num = 10;
    cout << num;
    return 0;
}
//We have to initialize the constant variable at the time of declaration as we cannot modify the value of it later in the program.
#include <iostream>
using namespace std;
int main() {
    int var = 10;
    // Declaring a constant variable
    const int c = 24;
    // Trying to change the value constant c
    c = 0;
    cout << c;
    return 0;
}
//output
//./Solution.cpp: In function 'int main()':
//./Solution.cpp:19:10: error: assignment of read-only variable 'cons'
//     cons = 0;

//---------------------------------------------------------------------------------------

//Types of Constants in C++
//Using const Keyword

//Using constexpr Keyword
//SYNTAX:constexpr DATATYPE variable_name = value ;
#include <iostream>
using namespace std;
int main() {  
    // Defining constant
    int constexpr hoursIn_day = 24;
    // Printing value
    cout << hoursIn_day;
  	return 0;
}

//Using #define Preprocessor
//SYNTAX:-#define MACRO_NAME replacement_value
#include <iostream>
using namespace std;

// Using #define to create a macro
#define Side 5

int main()
{
    // Using constant
    double area = Side * Side;

    cout << area;
    return 0;
}




















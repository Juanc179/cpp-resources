#include <iostream>

int main(){

    return 0;
}

/*
Flow control

For loops

for([executes at the beggining of the loop] ; [stops the code when the condition is no longer true] ; [] ){

}

iterator, variable used to travel trough the loop.
starting point.
incrementation mark
test, controls when de loops stops. 
body, inside curly braces, code that will wxecute multiple parts.

size_t is not a type, just a alias for some unsigned int representation. 8 bit unsigned int.

the variables declared inside de for loop are not usable outside of it.

range based for loops

for ( range_declaration : range_expression ) 
    loop_statement
Parameters :
range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction. size of the array
range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list. as an array
loop_statement : 
any statement, typically a compound statement, which
is the body of the loop.
source: https://www.geeksforgeeks.org/range-based-loop-c/


While Loops.

const unsigned int count {10};

unsigned int i {0}; // iterator declared outside

while ( i < count){ //test, continues if true, only enters if true.
    //shall be done
    i++; // incrementation mark
}

Do while loop

do{



}while (test); // will be done at least one time, until test is false
*/
#include <iostream>

int main(){

    return 0;
}

/*
Flow Control.

If 
    If(Condition){ if condition is empty, only a variable, enters if TRUE or 0.
        body
    } else{ // secondary condition
        
    }
    with else if you cant concanate multiple conditions. 
    another way to ask for false
    if(!(result==true))
    another way to ask for a bool
    bool variable = (num < num1) true or false depending of the output of the condition. 

switch ( variable ){

    case [condition]: {
        consequence; break; // break jumps out of the switch statement. if not present it will execute all the consequences.

    }
    case condition2 : {
        break;
    }
    case condition3: // if condition 3 is right, the code will execute until condition5 
    case condition4:
    case condition5:{
        break;
    }

    default : break; // default condition if none is correct.
}

ternary operator, very usefull when there are 2 conditions excusevely.
    result = (condition) ? option1 : option 2; // option must be the same type or casted to the same type
    is the same as 
    if(condition){
        result = option1; // result becomes equal to option1. 
    } else{
        result = option2;
    }

*/
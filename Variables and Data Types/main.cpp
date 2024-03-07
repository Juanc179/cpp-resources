#include <iostream>

int main(){
    // variable braced initialization.
    int lion_count;
    int dog_count {};
    int cat_count {15};
    int domesticated_animals { dog_count + cat_count};
    // assignment init

    int bike_count = 2;
    int truck_count = 7;

    //functional variable init
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    return 0;
}

/*
Int - hole numbers
double - fractional numbers
float - fractionals
char - characters
bool - True or False - 1 & 0
void - typless tipe.
auto - deduces types
*/
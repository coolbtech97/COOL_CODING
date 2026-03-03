#include <iostream>

void function_calls_counter() {
    static int count = 0; // Declares a static local variable, initialized only once
    count++;              // The value of 'count' persists after the function returns
    std::cout << "Function called " << count << " times." << std::endl;
}

int main() {
    function_calls_counter(); // Output: Function called 1 times.
    function_calls_counter(); // Output: Function called 2 times.
    function_calls_counter(); // Output: Function called 3 times.
    return 0;
}

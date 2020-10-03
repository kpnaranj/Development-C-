//============================================================================
// Name        : Exercise.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
    std::size_t n{6};
    double *data_array{ new double[n] };

    for ( std::size_t k{0}; k < n; ++k ) {
        std::cout << "Enter a number: ";
        std::cin >> data_array[k];
    }

    for ( std::size_t k{0}; k < n; ++k ) {

            std::cout << data_array[k];
        }

    // Do something with this data array...

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
#include <iomanip>
#include "mysort.h"

int main()
{
    int array[MySort::SIZE] = {100, 100, 100, 519, 37, 9999, 3, 1, 238};

    std::cout<<"Original array elements: \n";

    for(int i = 0; i < MySort::SIZE; i++)
        std::cout<<std::setw( 5 ) << array[ i ];

    std::cout<<"\n\n";

    MySort sortObj;
    sortObj.sort(array);

    std::cout<<"\nArray elements in sorted order: \n";

    for(int i = 0; i < MySort::SIZE; i++)
        std::cout<<std::setw( 5 ) << array[ i ];

    std::cout<<"\n";
    std::cin.get();

    return 0;
}

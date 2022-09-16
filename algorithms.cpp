#include <iostream>

/**
 * @brief: The current source file is a compound of some of the most famous Compuer Science algorithms rewritten in a more efficent way
 * @author: Andrea Maggetto
 */




/**
 * @brief: The classic fibonacci algorithm implementation.
 * Though it's its most adopted implementation, It isn't so efficent, Time complexity = O(n^n)
 * 
 * @return fibonacci(n)
 */
unsigned int recursive_fibonacci(const unsigned int& n){
    if(n <= 2) return 1;
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

/**
 * @brief: Iterative solution of the Fibonacci series.
 * Through one single loop the time complexity has massively fallen.
 * At run-time this iterative implementation instantly compiles also when n = 10^9 
 * @return fibonacci(n)
 */
unsigned int fibonacci(const unsigned int& n){  
    if(n <= 2) return 1;
    unsigned int first{1},second{1},result{};

    for(size_t i{2}; i < n; ++i){
        result = first + second; //2
        first = second; //1
        second = result; //2
    }
    return result;


}




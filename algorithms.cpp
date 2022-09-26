#include <iostream>
#include <unordered_map>

/**
 * @brief: The current source file is a compound of some of the most famous Compuer Science algorithms rewritten in a more efficent way
 * @author: Andrea Maggetto
 */




/**
 * @brief: Fibonacci numbers recursive algorithm.
 * @details: The following implementation wants to stress how the recursion pattern works, through this well-known algorithm
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

/**
 * @brief: Efficient algorithm to calculate the frequency of each characters inside a string
 * The following procedure has been implemented in order to showcase the power of map data structure 
 * 
 */
void c_amount(const std::string& str){
    std::unordered_map<char,size_t> characters{}; size_t str_size{str.size()};

    for(size_t i{0}; i < str_size; ++i){
        if(characters[str.at(i)]) ++(characters[str.at(i)]);
        else characters[str.at(i)] = 1;
    }

    //to print: for(const auto it : characters) std::cout<<it.first << " " <<it.second <<"\n";
}



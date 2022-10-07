#include <iostream>
#include <unordered_map>
#include <vector>

/**
 * @brief: The current source file is a compound of some of the most famous Compuer Science algorithms rewritten in a more efficent way.
 * @author: Andrea Maggetto
 */




/**
 * @brief: Fibonacci numbers recursive algorithm.
 * @details: The following implementation wants to stress how the recursion pattern works, through this well-known algorithm.
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
 * @param n : number to calculate fibonacci(n)
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
 * @param str: Input string
 */
void c_amount(const std::string& str){
    std::unordered_map<char,size_t> characters{}; size_t str_size{str.size()};

    for(size_t i{0}; i < str_size; ++i){
        if(characters[str.at(i)]) ++(characters[str.at(i)]);
        else characters[str.at(i)] = 1;
    }

    //to print: for(const auto it : characters) std::cout<<it.first << " " <<it.second <<"\n";
}

/**
 * @brief a different binary search implementation. 
 * The following encompasses both the divider and conquer and the two pointers coding patterns.
 * @param vect : Input vector
 * @param value : Value to find 
 * @return true : If value is in the input vector
 * @return false : Otherwise
 */
bool binary_search(const std::vector<int>& vect, const int& value){
    bool check{false}; int begin{},end,middle{vect.at(vect.size() / 2)};

    if(value < middle){
        begin = 0; end = middle;
    }
    else{
        begin = middle; end = vect.size() - 1;
    }

    for(; begin < end and !check; ++begin, --end){
        check |= (vect.at(begin) == value || vect.at(end) == value);
    }

    return check;
}

/**
 * @brief: Euclidean algorithm to find out MCD between two numbers
 * @details : The algorithms work in the following way:
 *            Given two numbers, A and B, both natural numbers,
 *            A can be rewritten as: A = B * quotient(A,B) + division rest(A,B)
 *            This istruction is iteratively repeated until A or B is equals to 0.
 *            The MCD is given when one of the two numbers is 0 and the other is not.
 *            The latter is the actual MCD between the two numbers
 * @param first First number
 * @param second Second number
 * @return MCD between first and second
 */
unsigned int get_mcd(int& first,int& second){
    if(!first and second) return second;
    else if(first and !second) return first;

    for(; first and second;){
        unsigned division_rest{first - (second * (first / second))};
        first = second;
        second = division_rest;
    }

    return first ? first : second;
};






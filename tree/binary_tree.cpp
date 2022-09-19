#include <iostream>

template<typename T>
struct node{
    T info;
    node* left{nullptr};
    node* right{nullptr};
};

template<typename T>
class binary_tree{
    node<T> header{}; size_t amount{0};

    public:
        binary_tree(){};
        binary_tree(const T& value){
            header.info = value;
            ++amount;
        }
        size_t nodes_amount() const{
            return amount;
        }
        void add_two_nodes(const node<T>& left, const node<T>& right){
            header.left = left.left;
            header.right = right.right;
            amount += 2;
        }
};  

int main(int argc, char const *argv[])
{           
    
}   

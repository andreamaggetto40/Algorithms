#include <iostream>

/**
 * @brief Binary Tree class
 * @details This file wants to display what a Binary Tree is and how it's made
 * 
 * @author Andrea Maggetto
 */
template<typename T>
class binary_tree{
    class node{
        T info;
        node* left{},right{};

        public:
            node(const T& info) : info(info), left(nullptr), right(nullptr){};
    };
    node root{};

    public:
        binary_tree() : root(nullptr){};
        void pre_order(const node& start) const{
            if(start){
                std::cout<<"Info : " <<start.info <<" ";
                pre_order(start.left);
                pre_order(start.right);
            }
        }
        void in_order(const node& to_start) const{
            if(start){
                in_order(to_start.left);
                std::cout<<"Info : " <<to_start.info <<" ";
                in_order(to_start.right);
            }
        }
        void post_order(const node& to_start) const{
            if(start){
                post_order(to_start.left);
                post_order(to_start.left);
                std::cout<<"Info : " <<to_start.info <<" ";
            }
        }
};   

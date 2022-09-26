#include <iostream>
#include <vector>

using std::vector;

template<typename T>
class queue{   
    vector<T> items{};

    public:
        queue(){};
        queue(const T& item){
            items.push_back(item);
        }
        void push_back(const T& item){
            items.push_back(item);
        }
        void pop_front(){
            for(size_t i{0}; i < items.size() - 1; ++i){
                items.at(i) = items.at(i + 1);
            }

            items.pop_back();
        }
        void print() const{
            for(const T it : items) std::cout<<it<<"\n";
        }
        const size_t size() const{
            return items.size();
        }
};



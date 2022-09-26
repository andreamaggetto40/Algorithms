#include <iostream>

template<typename T>
class vector{
    T* values = new T();
    size_t size{0};
    unsigned int counter{0};

    public:
        vector(){};
        vector(const size_t& size) : size(size){
            values = new T[size];
        }
        const size_t get_size() const{
            return size;
        }
        void push_back(const T& item){
            if(counter < size){
                values[counter] = item;
            }
            else{
                //TODO
            }
        }
        T at(const unsigned int& pos){
            if(pos >= 0 and pos < size) return values[pos];
            throw new std::exception();
        }
        void print() const{
            for(size_t i{0}; i < size; ++i){
                std::cout<<values[i] <<"\n";
            }
        }
};

int main(int argc, char const *argv[])
{
    vector<int> first{10};

    for(int i = 0; i < first.get_size(); ++i){
        first.push_back(i);
    }

    first.print();


}

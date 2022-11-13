#include <iostream>

using std::cout;

/*template<typename K,typename V>
class pair{ 
    K key{}; V value{};

    public:
        pair() = default;
        pair(const K& key, const V& value) : key(key),value(value){};
        void print_pair() const{
            cout<<"Key : " <<key <<" " <<" Value : " <<value <<"\n";
        }
};*/


template<typename K,typename V>
class array{
    class pair{
        K key{}; V value{};

        public:
            pair() = default;
            pair(const K& key, const V& value) : key(key), value(value){};

    };
    pair<K,V>* items{}; size_t size{0},capacity{};

    public:
        array() = default;
        array(const size_t& size) : size(size),capacity(size * 2){
            items = new pair<K,V>[size];
        }
        void print() const{
            size_t the_size{size};

            for(size_t i{0}; i < the_size; ++i){
                
            }
        }
};


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

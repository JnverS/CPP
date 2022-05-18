#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
class Array{
private:
    T *_array;
    size_t _len;
public:
    Array() : _array(NULL), _len(0){};
    Array(unsigned len): _array(new T[len]), _len(len){};
    Array(const Array& copy) {*this = copy;};
    ~Array(){delete [] _array;};

    Array& operator = (const Array& copy) {
        if (this == &copy) { return *this; }
        _array = new T[copy._len];
        _len = copy._len;
        for (size_t i = 0; i < _len; i++)
            _array[i] = copy._array[i];
        return (*this);
    }

    T& operator[](int elem)
    {
        if (elem > -1 && static_cast<uint32_t>(elem) < _len)
            return _array[elem];
        else
            throw WrongIndex();
    };

    int size(void){
        return _len;
    }
    class WrongIndex : public std::exception{
     public:
        virtual const char * what (void) const throw() {return "Element number is out of the array";}
    };
};

#endif
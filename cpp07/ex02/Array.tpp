#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(): _len(0), _array(nullptr){}

template <typename T>
Array<T>::Array(size_t len): _array(nullptr), _len(len){
    _array = new T[len];
}

template <typename T>
Array<T>::Array(const Array& copy): _len(0), _array(nullptr){
    if (copy._length > 0) {
        _array = new T[copy._len]();
        for (size_t i = 0; i < copy._len; i++)
            _array[i] = copy._array[i];
    }
    _len = copy._len;
}

template <typename T>
Array<T>::~Array(){
    if (_len > 0)
        delete [] _array;
}
template <typename T>
Array<T> &Array<T>::operator = (Array<T> const &copy) {
    if (_len > 0)
        delete [] _array;
    _array = nullptr;
    if (copy._len > 0)
    {
        _array = new T[copy._len]();
        for (size_t i = 0; i < copy._len; i++)
            _array[i] = copy._array[i];
    }
    _len = copy._len;
    return (*this);
}
template <typename T>
T &Array<T>::operator [](size_t elem)
    {
        if (elem >= _len)
            throw WrongIndex();
        return (_array[elem]);
    };

template <typename T>
size_t Array<T>::size(void) const{
        return _len;
}

template <typename T>
const char *Array<T>::WrongIndex::what() const throw(){
     return "Element number is out of the array";
}


#endif
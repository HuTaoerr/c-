#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>

template <class T>
class Array
{
private:
    T *list;
    int size;

public:
    Array(int sz = 50);
    Array(const Array<T> &a);
    ~Array();
    Array<T> &operator=(const Array<T> &rhs);
    T &operator[](int i);
    const T &operator[](int i) const;
    operator T *();
    operator const T *() const;
    int getSize() const;
    void resize(int sz);

}

template <class T>
Array<T>::Array(int sz)
{
    assert(sz >= 0);
    size = sz;
    list = new T[size];
}

template <class T>
Array<T>::Array(const Array<T> &a)
{
    size = a.size;
    list = new T[size];
    for (int i = 0; i < size; i++)
    {
        list[i] = a.list[i];
    }
    
}

template <class T>
Array<T>::~Array()
{
    delete [] list;
}

template <class T>
Array<T> &Array<T>::operator=()
{
    // TODO: insert return statement here
}

#endif
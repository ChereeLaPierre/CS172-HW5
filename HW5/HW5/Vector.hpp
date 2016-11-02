//
//  Vector.hpp
//  asdfkhj
//
//  Created by Cheree LaPierre on /1031/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>
template<typename T>
class Vector
{
public:
    Vector();
    void push_back(T element);
    void pop_back();
    unsigned int size() const;
    T at(int index) const;
    bool empty() const;
    void clear();
    void swap(Vector v2);
    
private:
    T elements[100];
    int vectorSize;
    
};

template<typename T>
Vector<T>::Vector()
{
    vectorSize = 0;
}

template<typename T>
void Vector<T>::push_back(T value)
{
    elements[vectorSize++] = value;
}

template<typename T>
void Vector<T>::pop_back()
{
    
}

template<typename T>
unsigned int Vector<T>::size() const
{
    return vectorSize;
}

template<typename T>
T Vector<T>::at(int index) const
{
    return elements[index];
}

template<typename T>
bool Vector<T>::empty() const
{
    return vectorSize == 0;
}

template<typename T>
void Vector<T>::clear()
{
    vectorSize = 0;
}


template<typename T>
void Vector<T>::swap(Vector v2)
{

}

#endif /* Vector_hpp */

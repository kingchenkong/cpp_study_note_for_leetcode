
#ifndef H_STACK_1
#define H_STACK_1

#include <vector>
using std::vector;

#include <cassert>

template <typename T>
class Stack
{
private:
    vector<T> elems;

public:
    void push(T const &elem); // append a item
    void pop();               // delete 'last' item
    T pop_2();                // return and delete 'last' item
    T const &top() const;     // return 'last' item
    bool empty() const
    {
        return elems.empty();
    }

    Stack(Stack<T> const &);               // copy constructor
    Stack<T> &operator=(Stack<T> const &); // assignment operator
};

template <typename T>
void Stack<T>::push(T const &elem)
{
    elems.push_back(elem);
}

template <typename T>
void Stack<T>::pop()
{
    assert(!elems.empty());
    elems.pop_back();
}

template <typename T>
T Stack<T>::pop_2()
{
    assert(!elems.empty());
    T elem = elems.back();
    elems.pop_back();
    return elem;
}

template <typename T>
T const &Stack<T>::top() const
{
    assert(!elems.empty());
    return elems.back();
}

template <typename T>
Stack<T>::Stack(Stack<T> const &)
{
    // TODO
}

template <typename T>
Stack<T> &Stack<T>::operator=(Stack<T> const &)
{
    // TODO
}

#endif
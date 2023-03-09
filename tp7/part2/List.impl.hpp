#ifndef LIST_IMPL_HPP
#define LIST_IMPL_HPP

#include "List.hpp"

template <typename T>
Cell<T>::Cell(const T& d):data(d), next(nullptr){}

template <typename T>
List<T>::List():head(nullptr), tail(nullptr){}

template <typename T>
List<T>::~List()
{
    Cell<T>* curr = head;
    Cell<T>* prec = head;
    while(curr != nullptr)
    {
        curr = curr->next;
        delete prec;
        prec = curr;
    }
}

template <typename T>
Cell<T>::~Cell()
{
    //delete next;
}

template <typename T>
bool List<T>::empty() const
{
    return head == nullptr;
}

template <typename T>
int List<T>::size() const
{
    int s = 0;
    Cell<T>* curr = head;
    while(curr != nullptr)
    {
        curr = curr->next;
        s++;
    }

    return s;
}

template <typename T>
void List<T>::push_back(const T& d)
{
    Cell<T>* newCell = new Cell<T>{d};

    if(tail == nullptr)
    {
        head = newCell;
    }
    else
    {
        tail->next = newCell;
    }
    tail = newCell;
}

template <typename T>
void List<T>::push_front(const T& d)
{
    Cell<T>* newCell = new Cell<T>{d};

    if(head == nullptr)
    {
        tail = newCell;
    }
    else
    {
        newCell->next = head;
    }
    head = newCell;
}

template <typename T>
T& List<T>::front() const
{
    if(head == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }
    return head.data;
}

template <typename T>
T& List<T>::back() const
{
    if(tail == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }
    return tail.data;
}

template <typename T>
T& List<T>::pop_front()
{
    if(head == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }
    if(head == tail)
    {
        tail = nullptr;
    }

    Cell<T>* tbr = head;
    delete head;
    head = head->next;

    return tbr->data;
}

template <typename T>
T& List<T>::pop_back()
{
    if(tail == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }

    Cell<T>* tbr;
    if(tail == head)
    {
        tbr = head;
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        Cell<T>* curr = head;
        while(curr->next->next != nullptr)
        {
            curr = curr->next;
        }
        tbr = curr->next;
        delete tail;
        tail = curr;
        tail->next = nullptr;
    }

    return tbr->data;
}

template <typename T>
void List<T>::display() const
{
    Cell<T>* curr = head;
    while(curr != nullptr)
    {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

#endif
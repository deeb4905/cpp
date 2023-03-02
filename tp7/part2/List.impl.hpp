#ifndef LIST_IMPL_HPP
#define LIST_IMPL_HPP

template <typedef T>
Cell<T>::Cell(const T& d):data(d), next(nullptr){}

template <typedef T>
List<T>::List():head(nullptr), tail(nullptr){}

template <typedef T>
List<T>::~List()
{
    //
}

template <typedef T>
bool List<T>::empty()
{
    return head == nullptr;
}

template <typedef T>
void List<T>::push_back(const T& d)
{
    Cell* newCell = new Cell{d};

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

template <typedef T>
void List<T>::push_front(const T& d)
{
    Cell* newCell = new Cell{d};

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

template <typedef T>
T* List<T>::front() const
{
    if(head == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }
    return &(head.data);
}

template <typedef T>
T* List<T>::back() const
{
    if(tail == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }
    return &(tail.data);
}

template <typedef T>
T* List<T>::pop_front() const
{
    if(head == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }

    Cell* tbr = head;
    head = head->next;

    return &(tbr.data);
}

template <typedef T>
T* List<T>::pop_back() const
{
    if(tail == nullptr)
    {
        throw(ExceptionOutOfBounds());
    }

    Cell* curr = head;
    if(tail == head)
    {
        head = nullptr;
        tail = nullptr;
    }
    while(curr->next != nullptr)
    {
        curr = curr->next;
    }

    tail = head->next;

    return &(curr.data);
}
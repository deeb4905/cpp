#ifndef LIST_HPP
#define LIST_HPP

template <typename T>
class List;

template <typename T>
class Cell
{
    template <typename U> friend class List;
    T data;
    Cell<T>* next;

    public:

    Cell(const T&);
    ~Cell();
};

template <typename T>
class List
{
    template <typename U> friend class Cell;

    Cell<T>* head;
    Cell<T>* tail;

    class ExceptionOutOfBounds{};

    public:

    List();
    ~List();

    bool empty() const;
    int size() const;
    void push_back(const T&);
    void push_front(const T&);
    T& front() const;
    T& back() const;
    T& pop_front();
    T& pop_back();
    void display() const;
};

#endif
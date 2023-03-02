#ifndef LIST_HPP
#define LIST_HPP

template <typename T>
class Cell
{
    T data;
    Cell* next;

    public:

    Cell(const T&);
    ~Cell();
};

template <typename T>
class List
{
    Cell* head;
    Cell* tail;

    class ExceptionOutOfBounds{};

    public:

    List();
    ~List();

    bool empty() const;
    int size() const;
    void push_back(const T&);
    void push_front(const T&);
    T* front() const;
    T* back() const;
    T* pop_front();
    T* pop_back();
    void display() const;
};

#endif
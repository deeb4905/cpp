#ifndef PILE_HPP
#define PILE_HPP

template<typename T>
class Pile
{
    int capacite;
    int taille;
    T* tab;

    public:

    class ExceptionBornes{};
    class ExceptionInvalidArgument{};

    // Constructors/Destructors

    Pile(int);
    Pile();
    Pile(const Pile<T>&);
    ~Pile();

    // Getters/Setters
    int getCapacite() const;
    int size() const;
    const T* getTab() const;

    // Other
    Pile<T>& operator=(const Pile<T>&);
    bool empty() const;
    void push(const T&);
    const T& pop();
    const T& top() const;
};

#endif
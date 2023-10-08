#ifndef PILE_HPP
#define PILE_HPP

class Pile
{
    int capacite;
    int taille;
    int* tab;

    public:

    class ExceptionBornes{};
    class ExceptionInvalidArgument{};

    // Constructors/Destructors

    Pile(int);
    Pile();
    Pile(const Pile&);
    ~Pile();

    // Getters/Setters
    int getCapacite() const;
    int size() const;
    const int* getTab() const;

    // Other
    Pile& operator=(const Pile&);
    bool empty() const;
    void push(int);
    int pop();
    int top() const;
};

#endif
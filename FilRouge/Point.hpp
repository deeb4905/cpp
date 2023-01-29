#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    static int counter;
    int x;
    int y;


    public:

    // Constructors
    Point(int, int);
    Point();

    // Getters/Setters
    int getX() const;
    int getY() const;
    static int getCounter();
    void setX(int);
    void setY(int);

    // Other
    void deplacerDe(int, int);
    void deplacerVers(int, int);

    void display();
};

extern Point ORIGINE;

#endif
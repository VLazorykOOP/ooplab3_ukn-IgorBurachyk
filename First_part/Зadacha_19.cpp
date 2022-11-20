#include <iostream>
#include <math.h>

using namespace std;

class Square
{
    private:
    int a; //Сторона квадрату
    unsigned int color; //Колір квадрату
    public:
    //Constructor 1
    Square(int side, unsigned int cl)
    {
        a = side;
        color = cl;
    }

    //Constructor 2
    Square(int side)
    {
        a = side;
        color = 0;
    }

    //Constructor 3
    Square()
    {
        a = 0;
        color = 0;
    }

    //Perimeter function
    int Perimeter()
    {
        return 4*a;
    }

    //Area function
    int Area()
    {
        return a*a;
    }

    //Opysane kolo
    float External()
    {
        return a*(sqrt(2)/2);
    }

    //Internal circle
    float Internal()
    {
        return (float) a/2;
    }

    //Setting function
    void SetSquare(int side, unsigned int cl)
    {
        if(side > 0) a = side;
        else a = 1;
        if (cl >= 0) color = cl;
        else color = 0;
    }

    //Output square information
    void Print_First_Info()
    {
        cout << "Side: " << a << " Color: " << color << endl;
    }

    //Output all info
    void All_Info()
    {
    Print_First_Info();
    cout << "Perimeter: " << Perimeter() << endl;
    cout << "Area: " << Area() << endl;
    cout << "External: " << External() << endl;
    cout << "Internal: " << Internal() << endl;      
    }
};

int main()
{
    Square square1(5, 3);
    square1.Print_First_Info();
    cout << "Perimeter: " << square1.Perimeter() << endl;
    cout << "Area: " << square1.Area() << endl;
    cout << "External: " << square1.External() << endl;
    cout << "Internal: " << square1.Internal() << endl;
    square1.SetSquare(-1, -1);
    // square1.Print_First_Info();
    square1.All_Info();    
}
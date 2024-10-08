//
//  main.cpp
//  дз 10
//
//  Created by Егор Джемлиханов on 07.10.2024.
//

#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point() {}
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void Print() const
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }

    void Input(int a, int b)
    {
        x = a;
        y = b;
    }

    int GetX() const
    {
        return x;
    }

    int GetY() const
    {
        return y;
    }

    void SetX(int _x)
    {
        x = _x;
    }

    void SetY(int _y)
    {
        y = _y;
    }

    friend Point operator-(const Point& a, const Point& b)
    {
        return Point(a.x - b.x, a.y - b.y);
    }

    friend Point operator-(const Point& a, int b)
    {
        return Point(a.x - b, a.y - b);
    }

    friend Point operator*(const Point& a, int b)
    {
        return Point(a.x * b, a.y * b);
    }

    friend Point operator--(Point& obj)
    {
        obj.x--;
        obj.y--;
        return obj;
    }

    friend Point operator--(Point& obj, int)
    {
        Point temp = obj;
        obj.x--;
        obj.y--;
        return temp;
    }

    friend Point& operator+=(Point& obj, int a)
    {
        obj.x += a;
        obj.y += a;
        return obj;
    }

    friend Point& operator-=(Point& obj, int a)
    {
        obj.x -= a;
        obj.y -= a;
        return obj;
    }

    friend Point& operator*=(Point& obj, int a)
    {
        obj.x *= a;
        obj.y *= a;
        return obj;
    }
};

int main()
{
    Point a(10, 20);
    Point b(5, 15);

    a.Input(30, 40);
    a.Print();

    Point result = a - b;
    result.Print();

    result = a - 10;
    result.Print();

    result = a * 10;
    result.Print();

    result = --a;
    result.Print();

    result = a--;
    result.Print();

    result += 10;
    result.Print();

    result -= 10;
    result.Print();

    result *= 10;
    result.Print();

    return 0;
}







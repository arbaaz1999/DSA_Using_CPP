#include <iostream>
using namespace std;

template <class T>
class Arithmatic
{
private:
    T a;
    T b;

public:
    Arithmatic(T a, T b);
    T add();
    T multiply();
};

template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmatic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmatic<T>::multiply()
{
    T c;
    c = a * b;
    return c;
}

int main()
{
    Arithmatic ar(1.5, 2.5);
    Arithmatic ar1(4, 5);
    cout << ar.add() << endl;
    cout << ar.multiply() << endl;
    cout << ar1.add() << endl;
    cout << ar1.multiply() << endl;

    return 0;
}
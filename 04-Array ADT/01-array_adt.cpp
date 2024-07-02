#include <iostream>
#include <stdexcept>
#include <chrono>
using namespace std::chrono;
using namespace std;

template <class T, class U = int>
class Array
{
private:
    T *A;
    U size;

public:
    U length = 0;
    Array(T A[], U size, U l);
    void display();
    void append(T el);
    U insert(U index, T el);
    U remove(U index);
    void swap(T *el1, T *el2);
    U linear_search(T key);
    U binary_search(T key);
    T get(U index);
    U set(U index, T element);
    T max();
    T min();
    T sum();
    float average();
};
template <class T, class U>
Array<T, U>::Array(T X[], U s, U l)
{
    size = s;
    length = l;
    A = new T[size];
    for (int i = 0; i < length; i++)
    {
        A[i] = X[i];
    };
};
template <class T, class U>
void Array<T, U>::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    };
    cout << endl;
};
template <class T, class U>
void Array<T, U>::append(T element)
{
    A[length] = element;
    length++;
};
template <class T, class U>
U Array<T, U>::insert(U index, T element)
{
    if (index >= 0 && index < length)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = element;
        length++;
    }
    else
    {
        return -1;
    }
};
template <class T, class U>
U Array<T, U>::remove(U index)
{
    if (index >= 0 && index < length)
    {
        int x = A[index];
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
        return x;
    };

    return -1;
};
template <class T, class U>
void Array<T, U>::swap(T *el1, T *el2)
{
    T temp;
    temp = *el1;
    *el1 = *el2;
    *el2 = temp;
};
template <class T, class U>
U Array<T, U>::linear_search(T key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            // swap(&A[i], &A[0]);
            return i;
        }
    }
    return -1;
};
template <class T, class U>
U Array<T, U>::binary_search(T key)
{
    int low = 0, high = length - 1, i = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == A[mid])
        {
            if (mid == 0 || A[mid - 1] != key)
                return mid;
            else
                high = mid - 1;
        }
        else if (key < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
};
template <class T, class U>
T Array<T, U>::get(U index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    };
    return -1;
};
template <class T, class U>
U Array<T, U>::set(U index, T element)
{
    if (index >= 0 && index < length)
    {
        A[index] = element;
    }
    else
        return -1;
};
template <class T, class U>
T Array<T, U>::max()
{
    T max = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
};
template <class T, class U>
T Array<T, U>::min()
{
    T min = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
};
template <class T, class U>
T Array<T, U>::sum()
{
    T total = 0;
    for (int i = 0; i < length; i++)
    {
        total += A[i];
    }
    return total;
};
template <class T, class U>
float Array<T, U>::average()
{
    T total = sum();
    return total / length;
};
int main()
{
    int A[] = {13, 15, 12, 9, 20, 25, 17};
    int length = sizeof(A) / sizeof(A[0]);
    Array arr(A, 30, length);
    arr.display();
    int element = arr.get(3);
    element == -1 ? cout << "Invalid Index" << endl : cout << element << endl;
    cout << "maximum element is " << arr.max() << endl;
    cout << "minimum element is " << arr.min() << endl;
    cout << "sum of all elements is " << arr.sum() << endl;
    cout << "average of all elements is " << arr.average() << endl;
    cout << "Length of given array is : " << arr.length << endl;
    return 0;
};
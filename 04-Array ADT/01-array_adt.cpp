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
    void insert(U index, T el);
    int remove(U index);
    void swap(T *el1, T *el2);
    int linear_search(T key);
    int binary_search(T key);
};

template <class T, class U>
Array<T, U>::Array(T X[], U s, U l)
{
    size = s;
    length = l;
    A = new T[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = X[i];
    };
}
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
}

template <class T, class U>
void Array<T, U>::insert(U index, T element)
{
    if (index > length || index < 0)
    {
        throw std::invalid_argument("Index should be less than or equal to the length of given Array and greater than or equal to 0");
    }
    else
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = element;
        length++;
    };
}

template <class T, class U>
int Array<T, U>::remove(U index)
{
    if (index > length || index < 0)
    {
        throw std::invalid_argument("Index should be less than or equal to the length of given Array and greater than or equal to 0");
    }
    else
    {
        int x = A[index];
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
        return x;
    };

    return 0;
}

template <class T, class U>
void Array<T, U>::swap(T *el1, T *el2)
{
    T temp;
    temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}

template <class T, class U>
int Array<T, U>::linear_search(T key)
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
}

template <class T, class U>
int Array<T, U>::binary_search(T key)
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
}

int main()
{
    int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 22, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
    int length = *(&A + 1) - A;
    Array arr(A, 30, length);
    auto l_start = high_resolution_clock::now();
    cout << "Element found at : " << arr.linear_search(22) << " index " << endl;
    auto l_stop = high_resolution_clock::now();
    auto l_duration = duration_cast<microseconds>(l_stop - l_start);
    auto b_start = high_resolution_clock::now();
    cout << "Element found at : " << arr.binary_search(22) << " index " << endl;
    auto b_stop = high_resolution_clock::now();
    auto b_duration = duration_cast<microseconds>(b_stop - b_start);
    cout << "Time taken by Linear search is : " << l_duration.count() << endl;
    cout << "Time taken by Binary search is : " << b_duration.count() << endl;
    cout << "Diference in Times is : " << l_duration.count() - b_duration.count() << endl;
    arr.display();
    cout << "Length of given array is : " << arr.length << endl;
    return 0;
}
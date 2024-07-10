#include <iostream>
#include <stdexcept>
#include <chrono>
#include <unordered_set>
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
    void pop();
    void push(T el);
    void shift();
    void unshift(T el);
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
    void reverse();
    U is_sorted();
    void insert_sorted(T el);
    void left_rotate_by(U d);
    void right_rotate_by(U d);
    T *merge(T B[], U n);
    T *_union(T B[], U n);
    T *intersection(T B[], U n);
    ~Array()
    {
        A = NULL;
        delete[] A;
        cout << "Destructor is called" << endl;
    }
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
void Array<T, U>::pop()
{
    length--;
};
template <class T, class U>
void Array<T, U>::push(T element)
{
    A[length] = element;
    length++;
};
template <class T, class U>
void Array<T, U>::shift()
{
    for (int i = 1; i < length; i++)
    {
        A[i - 1] = A[i];
    }
    length--;
};
template <class T, class U>
void Array<T, U>::unshift(T el)
{
    for (int i = length; i > 0; i--)
    {
        A[i + 1] = A[i];
    }
    A[0] = el;
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
            swap(&A[i], &A[0]);
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
template <class T, class U>
void Array<T, U>::reverse()
{
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    };
};
template <class T, class U>
U Array<T, U>::is_sorted()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
            return 0;
    };
    return 1;
};
template <class T, class U>
void Array<T, U>::insert_sorted(T el)
{
    int i = length - 1;
    while (i >= 0 && el < A[i])
    {
        if (A[i] > el)
            A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = el;
    length++;
};
template <class T, class U>
void Array<T, U>::left_rotate_by(U d)
{
    // parameter d is number of elements by which the array has to be rotated.
    int j = 1;
    while (j <= d)
    {
        int last = A[0];
        for (int i = 0; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        A[length - 1] = last;
        j++;
    }
};
template <class T, class U>
void Array<T, U>::right_rotate_by(U d)
{
    // parameter d is number of elements by which the array has to be rotated.
    int j = 1;
    while (j <= d)
    {
        int first = A[length - 1];
        for (int i = length - 1; i >= 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = first;
        j++;
    }
};
template <class T, class U>
T *Array<T, U>::merge(T B[], U n)
{
    T *C = new int[length + n]{0};
    int i, j, k;
    i = j = k = 0;
    // copy elements from A and B in C in sorted order
    while (i < length && j < n)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    // copy remaining elements from A and B to C
    for (; i < length; i++)
        C[k++] = A[i++];
    for (; j < n; j++)
        C[k++] = B[j++];

    return C;
};
template <class T, class U>
T *Array<T, U>::_union(T B[], U n)
{
    T *C = new int[length + n]{0};
    int i, j, k;
    i = j = k = 0;
    // copy elements from A and B in C in sorted order
    while (i < length && j < n)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else if (A[i] == B[j])
        {
            C[k++] = A[i++];
            j++;
        }
        else
            C[k++] = B[j++];
    }
    // copy remaining elements from A and B to C
    for (; i < length; i++)
        C[k++] = A[i++];

    for (; j < n; j++)
        C[k++] = B[j++];

    return C;
};
template <class T, class U>
T *Array<T, U>::intersection(T B[], U n)
{
    T *C = new int[length + n]{0};
    int i, j, k;
    i = j = k = 0;
    // copy elements from A and B in C in sorted order
    while (i < length && j < n)
    {
        if (A[i] < B[j])
            i++;
        else if (A[i] == B[j])
        {
            C[k++] = A[i++];
            j++;
        }
        else
            j++;
    };
    return C;
}

int main()
{
    int A[] = {2, 5, 9, 13, 15, 15, 15};
    int B[] = {3, 9, 11, 15, 19, 19, 19};
    int length_b = sizeof(B) / sizeof(B[0]);
    int length = sizeof(A) / sizeof(A[0]);
    Array arr(A, 30, length);
    int *C = arr.intersection(B, length_b);
    int length_c = sizeof(C) / sizeof(C[0]);
    for (int i = 0; i < length_c; i++)
        cout << C[i] << " ";
    cout << endl;
    C = NULL;
    delete[] C;
    arr.display();
    cout << "Length of given array is : " << arr.length << endl;
    return 0;
};
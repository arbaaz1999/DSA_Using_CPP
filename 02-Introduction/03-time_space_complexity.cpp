/*
# Time and Space Complexity:
=> Following are the cases by which we can calculate time and space complexity:
Case 1:
    Iterating through all elements of the Linked List or an Array,
    f(n) = n;
    i.e. O(n) time will be taken;
Case 2:
    Iterating through all elements for each element of an Array or Linked List,
    f(n) = n * n;
    f(n) = n^2;
    i.e. O(n^2);
Case 3:
    Iterating through rest of the elements for the 1st element and than 2nd and so on.
    means n(n-1, n-2, n-3,...... 4, 3, 2, 1, 0)
    i.e. (n * (n+1)) / 2;
    so, f(n) = n^2;
    hense O(n^2) time will be taken.
Case 4:
    Iterating through half of the elements every time.
    for (int i = n; i > 1; i /= 2) {
        code here.....
        .......
    }

    so, f(n) = log n;
    hence O(log n) time will be taken.
Case 5:
    If a function having only set of operations without any loop;
    than the time and space complexity will be constant for each operation.

    therefore, O(1) time will be taken.
*/
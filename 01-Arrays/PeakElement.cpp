#include <iostream>
using namespace std;

int peakMountainArray(int size, int A[])
{
    int st = 1, end = size - 2;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            return mid;
        }
        else if (A[mid - 1] < A[mid])
        {
            // right
            st = mid + 1;
        }
        else
        {
            // left
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int A[] = {0, 2, 5, 3, 1};
    int size = 5;

    cout << peakMountainArray(size, A);

    return 0;
}
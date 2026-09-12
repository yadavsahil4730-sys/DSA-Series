#include <iostream>
using namespace std;

int search(int A[], int n, int tar) {

    int st = 0;
    int end = n - 1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        // target mil gaya
        if (A[mid] == tar) {
            return mid;
        }

        // Left part sorted hai
        if (A[st] <= A[mid]) {

            if (A[st] <= tar && tar <= A[mid]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        // Right part sorted hai
        else {

            if (A[mid] <= tar && tar <= A[end]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int A[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    int tar = 0;

    int ans = search(A, n, tar);

    cout << "Index = " << ans;

    return 0;
}
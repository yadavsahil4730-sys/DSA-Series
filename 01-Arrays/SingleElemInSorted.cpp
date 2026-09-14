#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();

    if (n == 1)
        return A[0];

    int st = 0;
    int end = n - 1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        // Agar mid first ya last position par hai
        if (mid == 0 && A[0] != A[1])
            return A[mid];

        if (mid == n - 1 && A[n - 1] != A[n - 2])
            return A[mid];

        // Agar mid khud single element hai
        if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
            return A[mid];

        // mid even hai
        if (mid % 2 == 0) {
            if (A[mid] == A[mid + 1])
                st = mid + 1;
            else
                end = mid - 1;
        }

        // mid odd hai
        else {
            if (A[mid] == A[mid - 1])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> A = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    cout << "Single element = " << singleNonDuplicate(A);

    return 0;
}
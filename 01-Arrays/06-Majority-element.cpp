#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 2, 1, 1};
    int size = 5;

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < size; i++) {

        if (freq == 0) {
            ans = nums[i];
        }

        if (ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }

    cout << "majority element: " << ans << endl;

    return 0;
}
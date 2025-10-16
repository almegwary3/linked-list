// binary search 

#include <iostream>
using namespace std;

class Search {
public:
    int binary(int data[], int size, int target) {
        int left = 0;
        int right = size - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (data[mid] == target)
                return mid;
            else if (data[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
};

int main() {
    int num[] = {1, 3, 5, 7, 9};
    int size = sizeof(num) / sizeof(num[0]);

    Search s;
    int result = s.binary(num, size, 7);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}

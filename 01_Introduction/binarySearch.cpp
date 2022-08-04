// Binary Search
// O(log(n)) - complexity of Binary Search

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector <int> array, int number)
{
    int left = 0, right = array.size() - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(array[mid] == number) {
            return mid;
        }
        else if(array[mid] < number) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
}

int main()
{
    vector <int> array;
    array.push_back(1);
    array.push_back(3);
    array.push_back(5);
    array.push_back(7);
    array.push_back(9);

    cout << binarySearch(array, 5) << endl;
    cout << binarySearch(array, -1) << endl;

    return 0;
}

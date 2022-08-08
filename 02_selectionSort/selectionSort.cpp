// Selection Sort
// O(n^2) - complexity of Selection Sort

#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector <int> v)
{
    int smallest = v[0];
    int smallest_i = 0;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < smallest) {
            smallest = v[i];
            smallest_i = i;
        }
    }
    return smallest_i;
}

void selectionSort(vector <int> arr)
{
    vector <int> newArr;
    while(!arr.empty()) {
        int smallest_index = findSmallest(arr);
        newArr.push_back(arr[smallest_index]);

        arr.erase(arr.begin() + smallest_index);
    }

    for(int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> v;

    v.push_back(6);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);

    cout << "Not sorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    cout << endl;

    cout << "Sorted array: ";
    selectionSort(v);

    return 0;
}
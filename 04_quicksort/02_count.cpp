#include <iostream>
#include <vector>

using namespace std;

int count(vector <int> arr)
{
    if(arr.empty()) {
        return 0;
    }
    arr.pop_back();
    return count(arr) + 1;
}

int main()
{
    vector <int> array;
    array.push_back(1);
    array.push_back(3);
    array.push_back(5);
    array.push_back(7);
    array.push_back(9);
    
    cout << count(array) << endl;

    return 0;
}
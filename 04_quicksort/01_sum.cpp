#include <iostream>

using namespace std;

int sum(int size, int arr[])
{
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans += arr[i];
    }
    return ans;
}

int sumRec(int i, int arr[])
{
    if(i <= 0) {
        return 0;
    }
    return sum(i - 1, arr) + arr[i - 1];
}

int main()
{
    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << sum(size, array) << endl;
    cout << sumRec(size, array) << endl;

    return 0;
}
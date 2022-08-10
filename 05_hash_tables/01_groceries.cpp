#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <string, float> book;

    book["apple"] = 0.67;
    book["milk"] = 1.49;
    book["avocado"] = 1.49;

    unordered_map <string, float> :: iterator it;
    for(it = book.begin(); it != book.end(); it++) {
        cout << (*it).first << ": " << (*it).second << "$" << endl;
    } 

    return 0;
}
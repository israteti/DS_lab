#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cin >> text;
    char ch;
    cin >> ch;
    bool not_found = 1;
    for (int i = 0; text[i]; i++)
    {

        if (text[i] == ch)
        {
            cout << ch << " found at index:" << i << endl;
            not_found = 0;
            break;
        }
    }
    if (not_found)
    {
        cout << ch << "not found";
    }
    return 0;
}
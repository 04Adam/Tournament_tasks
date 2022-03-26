#include <iostream>
#include <string>
using namespace std;


int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int i = 1;
    cout << a[0];
    while ((int)a[i] < (int)b[0]) {
        if (i >= a.length()) {
            break;
        }
               
        cout << a[i];
        i++;
        
    }


    cout << b[0];
    return 0;
}


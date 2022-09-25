#include <iostream>
using namespace std;
int main() {
    int n, r;
    cout << "Number of crossings:";
    cin >> n;
    cout << "Number of roads:";
    cin >> r;
    int *m = new int[r, 2];

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cout << "Value a:";
        cin >> a;
        cout << "Value b:";
        cin >> b;

        if (a == b)
        {
            cout << "a and b cant be the same";
            return 0;
        }
        if (a < 0 || a > n)
        {
            cout << "Number a is incorrect";
            return 0;
        }
        if (b < 0 || b > n)
        {
            cout << "Number b is incorrect";
            return 0;
        }
        m[i, 0] = a;
        m[i, 1] = b;
    }

    for (int i = 0; i < n; ++i)
    {

    }

    return 0;
}

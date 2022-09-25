//
// Created by Adam on 25/09/2022.
//
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    return 0;
}

class road
{
public:
    int a,b;

    road(int A,int B, int N)
    {
        if(A < 0 || A > N)
        {
            cout << "A is incorrect";
            return;
        }
        if(B < 0 || B > N)
        {
            cout << "B is incorrect";
            return;
        }
        if (A == B)
        {
            cout << "A = B, which is incorrect";
            return;
        }
        a = A;
        b = B;
    }

    int[] AvailCross(int cross)
    {
        for
    }

};
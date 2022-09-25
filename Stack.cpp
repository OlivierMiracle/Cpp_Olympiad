//
// Created by Adam on 25/09/2022.
//
#include <iostream>
using namespace std;

struct number
{
    int value;
    number *next;
};

//Push
void Push(number **root)
{
    number *New = new number;
    cin >> New -> value;
    New -> next = *root;
    *root = New;
}

//Pop
void Pop(number **root)
{
    if(*root)
    {
        number *temp = *root;
        *root = (*root) -> next;
        cout << temp -> value << endl;
        delete temp;
    }
}

int main()
{
    char warunek;
    number *root = NULL, *New = NULL;
    cout << "Wpisz warunek (d, z, k):";
    while (cin >> warunek)
    {
        switch (warunek)
        {
            case 'd': //dodaj element do stosu
                cout << "d";
                Push(&root);
                break;
            case 'z':
                cout << "z";
                Pop(&root);//zdejmi element ze stosu
                break;
            case 'k': //zakoncz program
                cout << "k";
                return 0;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int calcHighest(int, int, int, int, int);
int calcLowest(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    cout << "Enter the value for a ==> ";
    cin >> a;
    cout << "Enter the value for b ==> ";
    cin >> b;
    cout << "Enter the value for c ==> ";
    cin >> c;
    cout << "Enter the value for d ==> ";
    cin >> d;
    cout << "Enter the value for e ==> ";
    cin >> e;
    cout << "\nThe Highest is ==> " << calcHighest(a, b, c, d, e) << endl;
    cout << "\nThe Lowest is ==> " << calcLowest(a, b, c, d, e) << endl;
}

int calcHighest(int a, int b, int c, int d, int e)
{
    int highest = 0;
    if (a > highest)
    {
        highest = a;
    }
    if (b > highest)
    {
        highest = b;
    }
    if (c > highest)
    {
        highest = c;
    }
    if (d > highest)
    {
        highest = d;
    }
    if (e > highest)
    {
        highest = e;
    }
    return highest;
}

int calcLowest(int a, int b, int c, int d, int e)
{
    int lowest = a;
    if (b < lowest)
    {
        lowest = b;
    }
    if (c < lowest)
    {
        lowest = c;
    }
    if (d < lowest)
    {
        lowest = d;
    }
    if (e < lowest)
    {
        lowest = e;
    }
    return lowest;
}
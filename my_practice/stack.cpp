#include <bits/stdc++.h>
using namespace std;
const int n = 5;
int stak[n];
int top = -1;
void push()
{
    if (top <= n - 1) 
    {
        int x;
        cout << "Input a digit: ";
        cin >> x;
        top++;
        stak.push(x);
    }
    else 
    {
        cout << "Stack Overflow, please try pop back first.." << endl;
    }
}
void pop()
{
    if (top >= 0) 
    {
        stak.pop();
    }
}
void top_value()
{
}
void display()
{
}
int main()
{
    cout << "1. Push a element" << endl;
    cout << "2. Pop a element" << endl;
    cout << "3. To check top_value" << endl;
    cout << "4. To display" << endl;
    cout << "5. End program" << endl;

    while (true)
    {
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            top_value();
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}
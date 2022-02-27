#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack s;
    ItemType a, b, c, d, e, f;
    ItemType out;

    a.Initialize(10);
    b.Initialize(20);
    c.Initialize(30);
    d.Initialize(40);
    e.Initialize(50);
    f.Initialize(60);


    s.Push(a);
    s.Push(b);
    s.Top();
    s.Push(c);
    s.Top();
    s.Pop();
    s.Top();
    s.Push(d);
    s.Top();
    s.Push(e);
    s.Top();
    s.Push(f);
    s.Top();
}
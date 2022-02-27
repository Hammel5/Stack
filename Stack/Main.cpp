#include "Stack.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    Stack s;
    ItemType a, b, c, d, e, f;
    ItemType out;
    ofstream outFile;
    outFile.open("StackOutput");


    a.Initialize(10);
    b.Initialize(20);
    c.Initialize(30);
    d.Initialize(40);
    e.Initialize(50);
    f.Initialize(60);


    s.Push(a);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Push(b);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Push(c);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Pop();
    outFile << "You have deleted the top number" << endl;
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Push(d);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Push(e);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;

    s.Push(f);
    out = s.Top();
    out.Print(outFile);
    outFile << " Is the top number" << endl;
}
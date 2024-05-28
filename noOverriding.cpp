#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {
        cout << "Hallo saya Function dari base class";
    }
};

class derrivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Function dari derrived class";
    }
};

int main()
{
    derrivedClass a;
    a.perkenalan();

    return 0;
}
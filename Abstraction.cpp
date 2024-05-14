#include<bits/stdc++.h>

using namespace std;
class Abstract {
private:
    int a, b;
 
public:
    void set_value(int x, int y)
    {
        a = x;
        b = y;
    }
 
    void display()
    {
        cout << a <<" "<<b<< endl;
    }
};
 
int main()
{
    Abstract Ab;
    Ab.set_value(10, 20);
    Ab.display();
    return 0;
}
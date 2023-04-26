#include "vector2.h"
#include <iostream>

using namespace std;
int main()
{
    Vector2 <int> v1{ v1.x = 2, v1.y = 1};
    Vector2 <int> v2{ v2.x = 5, v2.y = -3};
    Vector2 <int> v3 = v1 + v2 ;
    cout << v3;
    v3 *= 5;
    cout << v3;
    Vector2<double> v4{v4.x = 1.0, v4.y = 2.2};
    Vector2<int> v5;
    cout << "Please enter v.x and v.y separated by whitespace:";
    cin >> v5;
    cout << v5;
    cout << (v4*3.0);
    cout << 3.0*v4;
    cout << dot(v1,v2);
    cout << length(v1);
    cout << sqlength(v2);
    cout << normalize(v2);
    cout << (v1 += v2);
    cout << v4 / 3.1415;
    cout << (v4 /= 3.1415);
    return 0;
}
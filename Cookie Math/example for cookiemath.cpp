#include "cookiemath.hpp"
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << math::gcd(a,b) << ' ' << math::lcm(a,b) << endl;
    return 0;
}

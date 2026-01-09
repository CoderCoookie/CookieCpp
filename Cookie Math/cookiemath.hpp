#ifndef cookiemath
#define cookiemath

#include<cmath>
using namespace std;

/*
Cookie Math Hpp Project
created by CoderCoookie on github
when using, please add math:: before the function(you can change it if you want)
*/

namespace math {
    template<typename T>
    T gcd(T a,T b) { // get the GCD of two numbers
        while (b != 0) {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }

    template<typename T>
    T lcm(T a,T b) { // get the LCM of two numbers
        if (a == 0 || b == 0) return 0;
        long long absa = abs(a),absb = abs(b);
        long long copya = absa,copyb = absb;
        while (absb != 0) {
            long long tmp = absb;
            absb = absa % absb;
            absa = tmp;
        }
        long long gcd = absa;
        return copya / gcd * copyb;
    }
}
#endif

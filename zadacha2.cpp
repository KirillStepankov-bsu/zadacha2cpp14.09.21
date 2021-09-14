#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;

    if(a == 0){
        if(b == 0 && c == 0)
            cout << "R";
        else if(b == 0 && c !=0)
            cout << "No solutions";
        else
            cout << -c/b;
    }
    else if(b == 0){
        if(-c/a < 0)
            cout << "No solutions";
        else
            cout << sqrt(-c/a);
    }
    else if(c==0){
        cout << (-b/a > 0 ? 0 : -b/a) << " " << (-b/a < 0 ? 0 : -b/a);
    }
    else{
        double d = b*b-4*c*a;
        if(d<0)
            cout << "No solutions";
        else if(d==0)
            cout << -b/(2*a);
        else
            cout << min( (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a)) << " " << max( (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a));
    }
}
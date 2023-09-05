#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    int min, max;
    cout << "Enter five numbers" << endl;
    cin >> a >> b >> c >> d >> e;

    if(a <= b && a <= c && a <= d && a <= e)
        min = a;
    if(b <= c && b <= d && b <= e && b <= a)
        min = b;
    if(c <= d && c <= e && c <= a && c <= b)
        min = c;
    if(d <= e && d <= a && d <= b && d <= c)
        min = d;
    if(e <= a && e <= b && e <= c && e <= d)
        min = e;

    cout << "The minimum number is " << min << endl;

    if(a >= b && a >= c && a >= d && a >= e)
        max = a;
    if(b >= c && b >= d && b >= e && b >= a)
        max = b;
    if(c >= d && c >= e && c >= a && c >= b)
        max = c;
    if(d >= e && d >= a && d >= b && d >= c)
        max = d;
    if(e >= a && e >= b && e >= c && e >= d)
        max = e;

    cout << "The maximum number is " << max << endl;

    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

float F1(float a, float b, float x)
{
    return (a * pow(x, 2) + b);
}
float F2(float a, float x)
{
    return ((x - a) / x);
}

float F3(float c, float x)
{
    return (x / c);
}
void main()
{
    float a, b, c, Xstart, Xend, H, F;
    cout << "Enter a, b, c" << endl;
    cin >> a >> b >> c;
    cout << "Enter start and end value" << endl;
    cin >> Xstart >> Xend;
    cout << "Enter step" << endl;
    cin >> H;

    for (float x = Xstart; x < Xend; x += H)
    {
        if (x - 1 < 0 && b - x != 0)
        {
            F = F1(a, b, x);
        }
        else
        {
            if (x - 1 > 0 && b + x == 0)
            {
                F = F2(a, x);
            }
            else
            {
                F = F3(a, x);
            }
        }

        cout << "x= " << x << "\tF = " << F << endl;
    }
    return;
}


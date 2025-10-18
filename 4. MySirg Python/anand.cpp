#include<iostream>
using namespace std;
int main()
{
    system("cls");
    double ans = 1; // Use double for fractional results
    int i = 0, n, p;
    cout << "Enter the number and the power :";
    cin >> n >> p;
    if (p >= 0)
    {
        while (i < p)
        {
            ans *= n;
            i++;
        }
    }
    else
    {
        while (i < -p)
        {
            ans *= n;
            i++;
        }
        ans = 1.0 / ans;
    }
    cout<<ans<<endl;
    return 0;
}
#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char** argv) 
{

    int a, b, n1, n2, c, kmm;
    cout << "adad avval ra vared konid : \n";
    cin >> a;
    cout << "adad dovvom ra vared konid : \n";
    cin >> b;
    n1 = a;
    n2 = b;

    while (true)
    {

        if (b == 0) break;

        c = a % b;
        a = b;
        b = c;
    }

    kmm = (n1 * n2) / a;

  
    cout << "K.M.M :\t" << kmm;

    return 0;
}
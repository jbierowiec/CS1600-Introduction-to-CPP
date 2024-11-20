#include <iostream>
using namespace std;

int main() 
{
    int n, n1, n2, n3, n4;

    for (n1 = 1; n1 <= 9; n1++) 
    {
        for (n2 = 0; n2 <= 9; n2++) 
        {
            for (n3 = 0; n3 <= 9; n3++) 
            {
                for (n4 = 0; n4 <= 9; n4++) 
                {
                    if (n1 == n3 + n3 + n3) 
                    {
                        if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4) 
                        {
                            n = n1*1000 + n2*100 + n3*10 + n4;
                            if (n % 2 != 0) 
                            {
                                if (n > 999 && n < 10000) 
                                {
                                    if (n1 + n2 + n3 + n4 == 27) 
                                    {
                                        cout << "The Riddler's next caper will take place on " << n << " Pennsylvania Avenue!" << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    //variables to keep the values at ones,tens,hundreds,thousands place values
    int tens, thousands, ones, hundreds, i;
    
    for(i = 1000; i <= 9999; i++)
    {
        ones = i%10;
        tens=(i/10)%10;
        hundreds=(i/100)%10;
        thousands=i/1000;
        
        //First condition:each digit is different
        if((ones != tens) && (ones != hundreds) && (ones != thousands) && (tens != hundreds) && (tens != thousands) && (hundreds != thousands))
        {
            //Second condition: digit in thousands place is three times the digit in tens place
            if(thousands == (3*tens))
            {
                //Third condition: number is odd
                if(i%2 != 0)
                {
                    //Fourth condition: the sum of digits equals 27
                    if((ones + tens + hundreds + thousands) == 27)
                    {
                        cout << "Right address is: " << i << "\n";
                    }
                }
            }
        }
    }
        
    return 0;
}
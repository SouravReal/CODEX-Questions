// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long num = 600851475143;
    long long MP = -1;
    
    for (int i = 3; i <= sqrt(num); i += 2)
    {

        while (num % i == 0)
        {

            MP = i;

            num = num / i;

        }
    }
    if (num > 2)

        MP = num;

    cout<<"The largest prime factor of the given number is "<<MP<<'\n';

  return 0;
}

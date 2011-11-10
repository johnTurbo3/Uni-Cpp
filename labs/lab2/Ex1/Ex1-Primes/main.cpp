#include <iostream>
#include <list>

using namespace std;

int main()
{
    bool isPrime [100];
    list<int> primes;

    for(int i = 0; i < 100; i++)
    {
        isPrime[i] = true;
    }


    for (int i = 2; i < 100; i++)
    {
      if (isPrime[i])
      {
        primes.push_back(i);

        // Now mark the multiple of i as non-prime number
        for (int j = i; j * i <= 100; j++)
        {
          isPrime[i * j] = false;
        }
      }

    }
}



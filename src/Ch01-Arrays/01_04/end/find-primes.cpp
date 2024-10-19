#include <iostream>
#include <vector>

using namespace std;

bool isPrimeNum(int num)
{
    // O(n)
    // if (num == 1 || num % 2 == 0)
    // {
    //     return false;
    // }
    // for (int i = 3; i < (num / 2); i = i + 2)
    // {
    //     if (num % i == 0)
    //     {
    //         return false;
    //     }
    // }

    //  O(sqrt(n))
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    // TODO: Implement
    for (size_t i = 0; i < size; i++)
    {
        if (isPrimeNum(arr[i]))
        {
            primes.push_back(arr[i]);
        }
    }
}

int main()
{
    int numbers[]{4, 7, 12, 3, 9, 17, 29, 27};

    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}

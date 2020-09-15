#include <iostream>
using namespace std;
const int MAX = 10000;

int calcNextNumber(int startNumber)
{
    int nextNumber = startNumber;
    if (startNumber < 10)
    {
        nextNumber += startNumber;
    }
    else if (10 <= startNumber && startNumber < 100)
    {
        nextNumber += startNumber / 10;
        nextNumber += startNumber % 10;
    }
    else if (100 <= startNumber && startNumber < 1000)
    {
        nextNumber += startNumber / 100;
        nextNumber += (startNumber / 10) % 10;
        nextNumber += startNumber % 10;
    }
    else if (1000 <= startNumber && startNumber < MAX)
    {
        nextNumber += startNumber / 1000;
        nextNumber += (startNumber / 100) % 10;
        nextNumber += (startNumber / 10) % 10;
        nextNumber += startNumber % 10;
    }
    else
    {
        nextNumber += startNumber / 10000;
        nextNumber += (startNumber / 1000) % 10;
        nextNumber += (startNumber / 100) % 10;
        nextNumber += (startNumber / 10) % 10;
        nextNumber += startNumber % 10;
    }

    return nextNumber;
}

void erase(int startNumber, int numbers[])
{
    int nextNumber = calcNextNumber(startNumber);
    if (nextNumber > MAX)
    {
        return;
    }

    numbers[nextNumber - 1] = -1;
    erase(nextNumber, numbers);
}

int main()
{
    int numbers[MAX];
    fill_n(numbers, MAX, 0);

    for (int i = 0; i < MAX; ++i)
    {
        if (numbers[i] == -1)
        {
            continue;
        }

        int number = i + 1;
        erase(number, numbers);
    }

    for (int i = 0; i < MAX; ++i)
    {
        if (numbers[i] != -1 && numbers[i] < 100)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
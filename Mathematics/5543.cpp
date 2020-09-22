#include <iostream>
using namespace std;
int main()
{
    const int BURGER_COUNT = 3;
    const int DRINK_COUNT = 2;
    const int MAX_PRICE = 2000;

    int price;

    int cheapestBurgerPrice = MAX_PRICE;
    for (int i = 0; i < BURGER_COUNT; i++)
    {
        cin >> price;
        if (cheapestBurgerPrice > price)
        {
            cheapestBurgerPrice = price;
        }
    }

    int cheapestDrinkPrice = MAX_PRICE;
    for (int i = 0; i < DRINK_COUNT; i++)
    {
        cin >> price;
        if (cheapestDrinkPrice > price)
        {
            cheapestDrinkPrice = price;
        }
    }

    cout << cheapestBurgerPrice + cheapestDrinkPrice - 50 << endl;

    return 0;
}
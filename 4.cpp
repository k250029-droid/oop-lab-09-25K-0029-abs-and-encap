#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual bool processPayment(double amount) = 0;
};
class CreditCard : public PaymentMethod
{
    string cardNumber;
public:
    CreditCard(string c)
    {
        cardNumber = c;
    }
    bool processPayment(double amount)
    {
        if (cardNumber != "")
        {
            cout << "CreditCard payment of " << amount << " processed" << endl;
            return true;
        }
        cout << "CreditCard payment failed" << endl;
        return false;
    }
};
class DigitalWallet : public PaymentMethod
{
    double balance;
public:
    DigitalWallet(double b)
    {
        balance = b;
    }
    bool processPayment(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Wallet payment of " << amount << " processed" << endl;
            return true;
        }
        cout << "Wallet payment failed" << endl;
        return false;
    }
};
int main()
{
    PaymentMethod *p1;
    PaymentMethod *p2;

    CreditCard c("1234");
    DigitalWallet w(5000);

    p1 = &c;
    p2 = &w;

    p1->processPayment(2000);
    p2->processPayment(6000);

    return 0;
}
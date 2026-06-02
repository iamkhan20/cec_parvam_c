#include <iostream>
#include <string>
#include <vector>
using namespace std;
class payment
{
protected:
    double amount;
    string transaction_id;

public:
    payment(double amt, string id) : amount(amt), transaction_id(id) {}
    virtual void process_payment() = 0;
    virtual string gettype() const = 0;
    virtual ~payment() {}
};
class credit_card : public payment
{
private:
    string card_number;

public:
    credit_card(double amt, string id, string card_num) : payment(amt, id), card_number(card_num) {}
    void process_payment() override
    {
        cout << "Processing credit card payment of amount " << amount << endl;
    }
    string gettype() const override
    {
        return "Credit Card";
    }
};
class paypal : public payment
{
private:
    string email;

public:
    paypal(double amt, string id, string email_addr) : payment(amt, id), email(email_addr) {}
    void process_payment() override
    {
        cout << "Processing PayPal payment of amount " << amount << endl;
    }
    string gettype() const override
    {
        return "PayPal";
    }
};
class cryptocurrency : public payment
{
private:
    string wallet_address;

public:
    cryptocurrency(double amt, string id, string wallet_addr) : payment(amt, id), wallet_address(wallet_addr) {}
    void process_payment() override
    {
        cout << "Processing cryptocurrency payment of amount " << amount << endl;
    }
    string gettype() const override
    {
        return "Cryptocurrency";
    }
};
int main()
{
    vector<payment *> payments;
    payments.push_back(new credit_card(100.0, "TXN123", "4111 1111 1111 1111"));
    payments.push_back(new paypal(50.0, "TXN456", "user@example.com"));
    payments.push_back(new cryptocurrency(75.0, "TXN789", "1A1zP1eP5QGefi2DMPTfTL5SLmv7DivfNa"));
    for (payment *p : payments)
    {
        cout << "Payment Type: " << p->gettype() << endl;
        p->process_payment();
        cout << endl;
    }
    for (payment *p : payments)
    {
        delete p;
    }
    return 0;
}
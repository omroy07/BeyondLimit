#include <iostream>
#include <memory> // For smart pointers
#include <vector> // For storing multiple payment methods
using namespace std;
// Abstract base class (interface)
class PaymentMethod {
public:
    // Pure virtual function (abstract method)
    virtual void processPayment(double amount) const = 0;
    // Virtual destructor to allow proper cleanup of derived classes
    virtual ~PaymentMethod() = default;
};
// Concrete class for Credit Card payment
class CreditCardPayment : public PaymentMethod {
private:
    string cardNumber;
public:
    CreditCardPayment(const string& cardNum) : cardNumber(cardNum) {}
    void processPayment(double amount) const override {
        cout << "Processing credit card payment of $" << amount 
                  << " using card: " << cardNumber << "\n";
    }
};
// Concrete class for PayPal payment
class PayPalPayment : public PaymentMethod {
private:
    string email;
public:
    PayPalPayment(const string& emailAddress) : email(emailAddress) {}
    void processPayment(double amount) const override {
        cout << "Processing PayPal payment of $" << amount 
                  << " using email: " << email << "\n";
    }
};
// Function to simulate payment processing
void processAllPayments(const vector<shared_ptr<PaymentMethod>>& methods, double amount) {
    for (const auto& method : methods) {
        method->processPayment(amount);
    }
}
int main() {
    // Creating different payment methods
    shared_ptr<PaymentMethod> ccPayment = make_shared<CreditCardPayment>("1234-5678-9012-3456");
    shared_ptr<PaymentMethod> ppPayment = make_shared<PayPalPayment>("user@example.com");
    // Storing them in a container
    vector<shared_ptr<PaymentMethod>> payments = { ccPayment, ppPayment };
    // Process payments
    processAllPayments(payments, 150.175);
    return 0;
}

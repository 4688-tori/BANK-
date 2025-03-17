class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for accountHolder
    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance (with validation)
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }
};
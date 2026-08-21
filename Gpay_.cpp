#include <iostream>
#include <string>
using namespace std;
class GpayUser{
    // Making variables to store user details
    private:
        string Username;
        long Accnumber;
        float amount;
    public:
        // Making default constructor
        GpayUser(){
            Username = "";
            Accnumber = 0;
            amount = 0;
        }
        // Making constructor with parameters
        GpayUser(string name, long acc, float amt){
            Username = name;
            Accnumber = acc;
            amount = amt;
        }
        //Destructor
        ~GpayUser(){
            
        }
        // Making setters
        void setUsername(string name){
            Username = name;
        }
        void setAccnumber(long acc){
            Accnumber = acc;
        }
        void setAmount(float amt){
            amount = amt;
        }
        // Making getters
        string getUsername(){
            return Username;
        }
        long getAccnumber(){
            return Accnumber;
        }
        float getAmount(){
            return amount;
        }
        // Displaying user details
        void GiveDetails(){
            cout << "Username: " << Username << endl;
            cout << "Account Number: " << Accnumber << endl;
            cout << "Balance: Rs. " << amount << endl;
        }
        // Function to perform payment
        void DoPayment(GpayUser &receiver, float amt){
            if (amt <= 0){
                cout << "Invalid amount!" << endl;
            }
            else if (amount < amt){
                cout << "Insufficient balance!" << endl;
            }
            else{
                amount -= amt;
                receiver.amount += amt;

                cout << "\nPayment Successful!" << endl;
                cout << "Rs. " << amt << " transferred from "
                    << Username << " to "
                    << receiver.Username << endl;
            }
        }
};

int main(){
    // Creating an array of GpayUser objects
    GpayUser u[5] =
    {
        GpayUser("Jiya", 101, 5000),
        GpayUser("Aman", 102, 3000),
        GpayUser("Riya", 103, 4000),
        GpayUser("Rahul", 104, 2500),
        GpayUser("Simran", 105, 6000)
    };

    cout << "Welcome to GPay!" << endl;

    // Display users
    cout << "\nAvailable Users:" << endl;
    cout << "Account Number \t -\tUsername" << endl;
    for (int i = 0; i < 5; i++){
        cout << u[i].getAccnumber() << "\t\t" << " - " << "\t"
             << u[i].getUsername() << endl;
    }

    int sender, receiver;
    float amt;
    // Take account numbers of sender and receiver and amount to transfer
    cout << "\nEnter sender account number: ";
    cin >> sender;

    cout << "Enter receiver account number: ";
    cin >> receiver;

    cout << "Enter amount to transfer: Rs. ";
    cin >> amt;

    // Finding sender and receiver
    int senderIndex = -1;
    int receiverIndex = -1;
    for (int i = 0; i < 5; i++){
        if (u[i].getAccnumber() == sender)
            senderIndex = i;

        if (u[i].getAccnumber() == receiver)
            receiverIndex = i;
    }

    // Checking if account numbers are valid
    if (senderIndex == -1 || receiverIndex == -1)
    {
        cout << "Invalid account number!" << endl;
        return 0;
    }

    // Checking if sender and receiver are the same
    if (senderIndex == receiverIndex)
    {
        cout << "Sender and receiver cannot be the same!" << endl;
        return 0;
    }

    // Performing payment
    u[senderIndex].DoPayment(u[receiverIndex], amt);

    // Display updated balances of sender and receiver
    cout << "\nUpdated Balances:-" << endl;

    cout << "\nSender:" << endl;
    u[senderIndex].GiveDetails();

    cout << "\nReceiver:" << endl;
    u[receiverIndex].GiveDetails();

    return 0;
}
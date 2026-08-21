#include<iostream>
using namespace std;

// class Animal {
// public:
//     string name;
//     string species;
//     int age;

//     // Default constructor
//     Animal() {
//         name = "Leo";
//         species = "Lion";
//         age = 5;

//         cout << name << " " << species << " " << age << endl;
//     }

//     void Eats() {
//         cout << "Animal Eats" << endl;
//     }

//     void Sleeps() {
//         cout << "Animal Sleeps" << endl;
//     }
// };

// int main() {
//     Animal a;

//     return 0;
// }


#include <iostream>
using namespace std;

class Instagram
{
private:
    string username;
    long userId;
    int followers;
    int following;

public:

    // Function to store user details
    void StoreUserData()
    {
        cout << "\nEnter User Details" << endl;

        cout << "Username: ";
        cin >> username;

        cout << "User ID: ";
        cin >> userId;

        cout << "Followers: ";
        cin >> followers;

        cout << "Following: ";
        cin >> following;
    }

    // Function to display user details
    void PrintUserData()
    {
        cout << "\n Instagram User " << endl;
        cout << "Username  : " << username << endl;
        cout << "User ID   : " << userId << endl;
        cout << "Followers : " << followers << endl;
        cout << "Following : " << following << endl;
    }
};

int main()
{
    Instagram users[5];

    // Store details of 5 users
    for (int j = 0; j < 5; j++)
    {
        cout << "\n User " << j + 1 << " " << endl;
        users[j].StoreUserData();
    }

    // Display details of 5 users
    cout << "\n\n ALL USERS " << endl;

    for (int j = 0; j < 5; j++)
    {
        users[j].PrintUserData();
    }

    return 0;
}
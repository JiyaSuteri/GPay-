// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//         long registrationId;
//         string name;
//         float cgpa;

//         void PrintStudentData(){
//             cout<<registrationId<<" "<<name<<" "<<cgpa;
//         }
// };
// int main(){
//     Student s;
//     s.registrationId=1252;
//     s.name="Jiya";
//     s.cgpa=9.0;
//     s.PrintStudentData();
//     return 0;
// }
//TAKE 5 STUDENTS DATA FROM THE USER AND STORE IT . PRINT ALL THE 5 DATA.
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//         long registrationId;
//         string name;
//         float cgpa;
//         void StoreData(long &registrationId, string &name, float &cgpa){
//             cin>>registrationId>>name>>cgpa;
//         }

//         void PrintStudentData(){
//             cout<<registrationId<<" "<<name<<" "<<cgpa<<"\n";
//         }
// };
// int main(){
//     Student s;
//     for(int i=0;i<5;i++){
//         s.StoreData(s.registrationId,s.name,s.cgpa);
//     }
//     for(int i=0;i<5;i++){
//         s.PrintStudentData();
//     }
    
//     return 0;
// }
#include<iostream>
using namespace std;
class Employee{
    public:
        string name;
        long EmpId;
        float Salary;
        
    void StoreEmpData(){
        cout<<"Enter Employee Details: ";
        cin>>name>>EmpId>>Salary;
    }
    void PrintEmpData(){
        cout<<name<<" "<<EmpId<<" "<<Salary<<endl;
    }
};
int main(){
    Employee e[5];
    for(int i=0;i<5;i++){
        e[i].StoreEmpData();
    }
    for(int i=0;i<5;i++){
        e[i].PrintEmpData();
    }

    return 0;
}
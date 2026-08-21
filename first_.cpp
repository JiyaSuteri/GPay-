#include <iostream>
using namespace std;
// void findSum(int n,int &TotalSum){
// 	for(int i=1; i<=n; i++){
// 		TotalSum+=i;
// 	}
// }
// int main() {
// 	int n, TotalSum=0;
// 	cout<<"Enter number: ";
// 	cin	>>n;
// 	findSum(n,TotalSum);
// 	cout<<TotalSum ;
// 	return 0;
	
// }
void EnterStudentDetails(string firstname,long firstregno,float firstcgpa){
	cout<<"Enter name of student: ";
		cin>>name;
		cout<<"Enter registration number: ";
		cin>>regno;
		cout<<"Enter CGPA: ";
		cin>>cgpa;
}
int main(){
	int num;
	cout<<"Enter the number of students: ";
	cin>>num;
	string firstname;
	long firstregno;
	float firstcgpa;
	string secondname;
	long secondregno;
	float secondcgpa;
	for(int i=0;i<num;i++){
		cout<<"Enter name of student: ";
		cin>>name;
		cout<<"Enter registration number: ";
		cin>>regno;
		cout<<"Enter CGPA: ";
		cin>>cgpa;
		cout<<"Name of"<<i<<" student: ";
		cout<<name<<endl;
		cout<<"Registration number: ";
		cout<<regno<<endl;
		cout<<"CGPA is: ";
		cout<<cgpa<<endl;

	}
	return 0;

}
//A program for a simple console-based calculator.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
		int num1,num2;
	 	string choice;
	 	cout<<"Welcome to the simple Calculator!\n";
	 	
	 	cout<<"\n1.Addition.\n";
		cout<<"2.Subtraction.\n";
		cout<<"3.Multiplication.\n";
		cout<<"4.Divission.\n";
		cout<<"5.Exponentiation.\n";
		cout<<"6.Exit.\n";
		//while loop starts
		while(true){
			cout<<"\nEnter your choice(1-6): " ;
			cin>>choice;
			if(choice =="6"){
			cout<<"Good bye!";
			break;
		}
		if(choice == "1"){
		cout<<"\nEnter the first number: ";
		cin>>num1;
		cout<<"Enter the second number: ";
		cin>>num2;
		cout<<"result:"<<num1 + num2;
		}		
		else if(choice =="2"){
		cout<<"Enter the first number: ";
		cin>>num1;
		cout<<"Enter the second number: ";
		cin>>num2;
		cout<<"result:"<<num1 - num2;		
		}
		else if(choice =="3"){
		cout<<"Enter the first number: ";
		cin>>num1;
		cout<<"Enter the second number: ";
		cin>>num2;
		cout<<"result:"<<num1 * num2;
		}
		else if(choice =="4"){
		cout<<"Enter the  numerator: ";
		cin>>num1;
		cout<<"Enter the  denominator: ";
		cin>>num2;
		if (num2 != 0){
		cout<<"result:" <<num1 / num2; } 
		else {
        cout << "Error Cannot divide by 0." <<endl;
		continue;
		}  
		}                                   
		else if(choice=="5"){
		cout<<"Enter the base: ";
		cin>>num1;
		cout<<"Enter the exponent: ";
		cin>>num2;
		cout<<"result:"<<pow(num1,num2);
		}
		
		else{
		cout<<"invalid choice";
		cout<<"choose between(1-6) and try again";
		continue;
		}
	
	}//while loop ends.
	cout<<"\n------THANK YOU-----";
		return 0;
	}
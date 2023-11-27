#include <iostream>
#include<conio.h>
using namespace std;

float performOperation(float , float ,int );

int main()
{

    float num1, num2, result;
    int change,operation;
    bool check = true;
    cout << "************************ WELCOME TO SIMPLE CALCULATOR ************************" << endl<< endl;
    do{
        cout << "Enter 1st Number: ";
        cin >> num1;
        cout << "Enter 2nd Number: ";
        cin >> num2;
        cout << endl<<"Enter operation you want to perform:" << endl;
        cout << "1. Multiplication" << endl
             << "2. Division" << endl
             << "3. Addition" << endl
             << "4. Subtration" << endl<<endl<<"Enter Selection: ";
        cin >> operation;
        if(operation>=1 && operation<=4){
        result = performOperation(num1, num2, operation);
        cout << endl<<"Result : " << result << endl<<endl;
         cout << "Do you want to perform another operation?"<<endl<<"\t([1]-YES OR [0]-NO): "<<endl<<"Enter: ";
        cin >> check;
        }
        else{
        	while(1){
        		cout<<"Invalid Number!!!"<<endl<<"Enter the operation number again: ";
        		cin>>operation;	
        		if(operation>=1 && operation<=4){break;}
        		else{continue;}
			}
			result = performOperation(num1, num2, operation);
            cout << endl<<"Result : " << result << endl<<endl;
            cout << "Do you want to perform another operation?"<<endl<<"\t([1]-YES OR [0]-NO): "<<endl<<"Enter: ";
            cin >> check;
		}
		cout<<endl<<endl<<endl;
    } while (check);
    cout << endl<< endl<< "************************ THANK YOU FOR USING SIMPLE CALCULATOR ************************";
    getch();
    return 0;
}
float performOperation(float num1, float num2, int operation){
    switch (operation){
    case 1:
        return (num1 * num2);
        break;
    case 2:
        return (num1 / num2);
        break;
    case 3:
        return (num1 + num2);
        break;
    case 4:
        return (num1 - num2);
        break;
    default:
        cout << "Invalid Operation" << endl;
        break;
    }
    return 0;
}
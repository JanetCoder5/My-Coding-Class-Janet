#include <iostream>
#include <string>

using namespace std;

double Area (double length){
	
	return length * length;
}
double Perimeter(double length){
	
	return 4 * length;
}

int main()
{
	// Declare and initialize
	int age=0;
	double length = 0.0;
	string option = "";
	// Alphanumeric
	string username;
	string welcome= "Welcome ";
	string msg= "Enter Your Username: "; 
	double area= 0.0;
	double perimeter = 0.0;
	
		
	//Pseudocode
	// Ask for username; "Enter Your username"
	cout << "Enter Your Username: ";
	 
	// Store the username
	cin >> username;
	
	// Display a personalized welcome message
	 cout << "Welcome " << username << endl; 
	 
	// Ask for user age
	cout << "Please Enter Your Age: ";
	cin >> age;
	
	// Ask user for length of square
	cout << "Please enter the length to use to calculate an area or perimeter or both ";
	cin >> length;
	
	
	//Prompt Menu
	cout << "Enter A to calculate Area" << endl;
	cout << "Enter P to calculate Perimeter" << endl; 
	cout << "Enter AP to calculate Area and Perimeter" << endl; 
	cin >> option;
	
	//Assignment =
	// Comparison ==
	// Serving the orders
	if(option == "A")
	{
		    area = Area(length);
			//Display Area
			cout <<"The area of the square is " <<area <<endl;
	}
	else if(option == "P")
	{
		perimeter = Perimeter(length);
		//Display perimeter
		cout << "Then perimeter of the square is " << perimeter << endl;
	}
	else if(option == "AP")
	{
		perimeter = Perimeter(length);
		//Display perimeter
		cout << "Then perimeter of the square is " << perimeter << endl;
		
		 area = Area(length);
		//Display Area
		cout <<"The area of the square is " <<area <<endl;
	}
	else
	{
			cout << "Invalid Option! Good Bye! ";
			// What does return -1 do???? It tells us that the code 	
			// exited due to an error or anomaly
			return -1;
	}
	
	return 0;
}


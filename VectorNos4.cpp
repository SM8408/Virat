
//4:Create a C++ program that does the following:
//	Initializes an empty vector of integers.
//	Asks the user to enter a series of integers and adds them to the vector until the user enters a 
//	specific sentinel value (e.g., -1). Prints the elements of the vector.
//	Calculates and prints the sum and average of the values in the vector.

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
	vector<int> MyNumbers;
	cout<<"1.Add nos  2.Display  3.Remove  4.Sum  5.Average"<<endl;
	int ch,nos;
	
	do
	{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				cout<<"Enter the numbers"<<endl;
				cin>>nos;
				if(nos>0)
				{
					MyNumbers.push_back(nos);
					cout<<"Number is added"<<endl;
				}
				else
				{
					cout<<"Number is negative or 0"<<endl;
				}
				break;
			}
			
			
			case 2:
			{
				int size1 = MyNumbers.size();
				for(int i=0; i<size1; i++)
				{
					cout<<MyNumbers[i]<<endl;
				}
				break;
				
				// using iterator
//				vector<int>:: iterator it1 = MyNumbers.begin();
//				vector<int>:: iterator it2 = MyNumbers.end();
//				cout<<"Numbers are = "<<endl;
//				while(it1!=it2)
//				{
//					cout<<*it1<<endl;
//					it1++;
//				}
//				break;
			}
				
			
			case 3:
			{
				MyNumbers.pop_back();
				cout<<"Number is removed"<<endl;
				break;
			}
			
			case 4:
			{
				int sum = accumulate(MyNumbers.begin(),MyNumbers.end(),0);
				cout<<"Sum of Numbers = "<<sum<<endl;
				break;		
			}
			
			case 5:
			{
				int sum, average;
				sum = accumulate(MyNumbers.begin(),MyNumbers.end(),0);
				average = sum/(MyNumbers.size());
				cout<<"Average of numbers = "<<average<<endl;
				break;
			}		
		}	
	}while(ch!=6);
	
	return 1;
}

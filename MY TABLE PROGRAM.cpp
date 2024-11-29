#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int i, Table, Range;
	do { 
	cout<<"Enter The Number For Table (1 to 100) :" << " ";
	cin>>Table;
	cout<<"------------------------------------"<<endl;
	cout<<"\n";
	if (Table<0 || Table>99) {
	cout<<"INVALID NUMBER ENTER NUMBER BETWEEN (1 TO 99) \n";
	cout<<"------------------------------------"<<endl;
	cout<<"\n";
	}
	
}	while (Table<0 || Table>99);

	cout<<"How Many Times Did You Want To Print Table :" << " ";
	cin>>Range;
	
	cout<<"------------------------------------"<<endl;
	cout<<"\n";
	
	for(i=1; i<=Range; i++)
	{
		cout << setw(5) << Table << setw(5) << "x" << setw(5) << i << setw(5) << "=" << setw(8) << Table*i <<endl;
	}
	return 0;
}

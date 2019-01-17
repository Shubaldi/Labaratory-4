#include <iostream>
using namespace std;

int main()
{
	int numero[5];
	int *ptr =numero; 
	
	cout<<"Mag Lagay ng 5 numero na iyong nais:"<< endl;
	cin>>numero[0]>>numero[1]>>numero[2]>>numero[3]>>numero[4];
	
	cout<<"Ang iyong mga nilagay na numero ay:"<< endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 

}

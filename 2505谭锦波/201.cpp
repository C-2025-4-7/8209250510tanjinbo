#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char c;
	cout << "Enter a character: ";
	cin >> c;
	if(islower(c)){
		cout << (char)toupper(c) << endl;
	}else{
		cout << "ºó¼Ì×Ö·ûASCIIÖµÎª: " << (int)(c + 1) << endl;
	}
	return 0;
}

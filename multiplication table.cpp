#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int row,column,x;
	cout<<"multiplication table"<<endl;
	row=1;
	do{
		column=1;
		do{
			x=row*column;
			cout<<x<<'\t';
			column=column+1;
			
		}
		while(column<=10);
		cout<<endl;
		row=row+1;
	}
	while(row<)
	return 0;
}

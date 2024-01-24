#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum;
	int x;
	sum=0;
	x-1;
	while(x<=100){
		sum=sum+x;
		x=x+1;
		x=x++;
		
		
	}
	cout<<"1+2+3+4.....100="<<sum<<endl;
	return 0;
}

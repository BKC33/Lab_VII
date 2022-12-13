#include<iostream>

using namespace std;








int main(){
	
	int i = 0, P[5000], k, result,X =0;
	while(X < 5000){
		P[X] = 2*X+1;
		X++;
	}

	cout<<"Please input k: ";
	cin>> k ;

	if(k>0){
		i = 0;
		result = 0;

			while(i<5000){
				if((P[i]%k)==0){
					result = result-P[i];
				}else{
					result = result+P[i];
				}
					i++;
				}
				cout<<"Result = "<<result;
			}else{

			cout<< "Invalid input!!!";
			
			}
	return 0;
}

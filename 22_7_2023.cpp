#include<iostream>
using namespace std;
//cho 1 mangr, return mangr moi voi index i = tich các gia tri con lai
void Change_of_index(int n, int *old_array, int *&new_array){
	for(int i=0;i<n;i++){
		int tich=1;
		for(int j=0; j<n;j++)
			if(old_array[i]!=old_array[j]) tich*=old_array[j];
		new_array[i]=tich;
	}
}
int main(){
	int *a, *b;
	int n=5;
	a=new int [n];
	b=new int [n];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	Change_of_index(n, a, b);
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
}

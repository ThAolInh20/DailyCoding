#include<iostream>
using namespace std;
void ht(int *a, int n){
	for(int i = 0; i< n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int *a = new int[100];
	a[0]= 3;
	a[1] = 4;
	a[2] = 6;
	a[3] = 7;
	int n = 4, m = 5;
	int *b = new int[100];
	b[0] = 1;
	b[1] = 3;
	b[2] = 8;
	b[3] = 10;
	b[4] = 12;
	int i = 0, j = 0;
	int h = 0;
	int *c = new int [100];
	while(i < n && j < m){
		if(a[i]< b[j]){
			c[h] = a[i];
			i++;	
			h++;
		}else {
			c[h] = b[j];
			j++;
			h++;
		}
	}
	while(i < n){
		c[h] = a[i];
		i++;	
		h++;
	}
	while(j < m){
		c[h] = b[j];
		j++;
		h++;
	}
	ht(c, n+m);
	
}

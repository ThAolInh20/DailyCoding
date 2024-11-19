#include<iostream>
using namespace std;

int main(){
	int n = 6;
	int* a = new int[n];
	
	a[0] = 1;
	a[1] =3;
	a[2] = 3;
	a[3] = 10;
	a[4] = 2;
	a[5] = 4;
	int k = -1;
    int i = 0, j;
    int target = 6;
    while (k != 0) {
        j = i + 1;
        while (j < n && k != 0) {
            k = target - (a[i] + a[j]);
            j++;
        }
        i++;
    }
	cout<<i- 1;
	cout<<j- 1;
}


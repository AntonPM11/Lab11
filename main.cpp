#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
 
int N;
 
void fun(bool *arr, int n) {
    int i;
    cout<<"{";
    for(i=0;i<n;i++) {
        if(arr[i]) {
            cout<<" "<< i+1<<" ";
        }
    }
    cout<<"}"<<endl;
}
 
void pfun(bool *barr, int n) {
    barr[0]=false;
    if(n>1)
        pfun(barr+1, n-1);
    else
        fun(barr-N+1, N);
    barr[0]=true;
    if(n>1)
        pfun(barr+1, n-1);
    else
        fun(barr-N+1, N);
}
 
int main() {
	cout<<"Enter n: ";
	cin>>N;
    bool barr[N];
    pfun(barr, N);
    return 0;
}

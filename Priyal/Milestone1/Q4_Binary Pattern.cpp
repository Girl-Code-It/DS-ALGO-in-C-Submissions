#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int num =1;
    for(int i=n;i>0;i--){
    	for(int j=1;j<=i;j++){
    		cout<<num;
		}
    	num= !num;
		cout<<"\n";
	}
	
}


int main(){

int n;
cin>>n;
//int arr[n];
//for(int p=0;p<n;p++){
//	cin>>arr[p];
//}
printPatt(n);

    return 0;
}

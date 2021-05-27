/*****************************************************************************************************

Statement : Printing all the palindrome of the given string 

Input : abba

output : a, abba , b, bb, b, a

Author : Krishna Shivshankar Mandage

Date  : 17 may 2021


*****************************************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int i){
	int c = 2;
	while(c*c <= i)
	{
		if(i%c==0)
		{ return 0;}
        c++;
	}
	return 1;
}






int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
int n1, n2;
cin>>n1>>n2;

vector<int> v;

for(int i = n1;i<=n2;i++)
{
	if(prime(i)) v.push_back(i);
}
if(v.size()==1)cout<<0<<"\n";
else if(v.size()==0)cout<<-1<<"\n";
else cout<<v[v.size()-1] - v[0]<<"\n";
    } 
return 0;}
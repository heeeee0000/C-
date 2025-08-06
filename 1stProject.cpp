#include<bits/stdc++.h>
using namespace std;

int *p;
void fun(){

int *x = new int;
*x=10;
p = x;

cout<<"For fun func : "<<*p<<endl;

}

int main(){

fun();

cout<<"For main function : "<<*p<<endl;



}

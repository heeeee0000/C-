#include<bits/stdc++.h>
using namespace std;
// akhn class define korbo karon class define korte hoy main function r aggey using namespace std; ar por

class Student{ //Aikhney class create korlam Jeita holo Student... Object create korbo main function e..
// { ai 2 bracket r majh khaney access modifier dite hobey jei gula holo :1. Private 2. Protected 3. Public,,.. We will use only public here}

public:

char name[100];// 100 bytes
int roll;// 4 bytes
double gpa;// 8 bytes

}; // We have to use ; in last to define class

int main(){
Student a;
a.roll=10;
a.gpa = 4.5;
//a.name = "Rakib" aita korte parbo nah karon jokhon array ta define kortisi tokhoni aitar 1st address ta initialize korar jnno use korte pari.. ai jnno akta temp array nibo..
char temp [100] = "Rakib";
strcpy(a.name,temp);//Galib vai sikhaysilo..aikhney a.name --> Destinations and temp jeitar thike value copy korbo..

cout<< a.name<<" "<< a.roll << " "<< a.gpa;



}

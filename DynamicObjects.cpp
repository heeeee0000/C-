#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int roll,int cls,double gpa){
      
      (*this).roll=roll;
      (*this).cls = cls;
      (*this).gpa = gpa;
      
      
  }
};

int main(){
    
    Student* karim = new Student(56,7,3.4);
    // Ai khney dynamic object create korlam  new Student(56,7,3.4); .. new likhey data type dite hoy.. jehetu Student amr data type tai Student dilam.. akhn Student* karim.. karim r modhey heap memory teh create hya values it means roll,class,gpa r memory address karim r modhey aschey jeita stack memory teh obosthan kortese
    
    cout<<(*karim).roll<<" "<<(*karim).cls<<" "<<(*karim).gpa<<endl;
   // aikhey karim.roll likhle kicui astoh nah karon amke akhn dereference korte hobe.. R static nah use korey dynamic memory use kora drkr nhle values return hoto nah .. values hariye jeto..
   //(*karim). roll k karim->roll likha jay
    
}

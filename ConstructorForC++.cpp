#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int roll;
  int cls;
  double gpa;
  Student(int r, int c, double g){//Student aita constructor
      roll = r;// Roll number jeita ami baire thike nite pari main function thike call korte.. Constructor always call hoy alada korey call kora lggey nah
      cls = c;
      gpa = g;
      
  }
  
    
};

int main() {
    Student rahim(50, 7, 3.6);//Ai perameter onujayi Constructor e bosbe roll =50 cls=7 gpa=3.6
cout<<rahim.cls<<" "<<rahim.roll<<" "<<rahim.gpa<<endl;
    Student karim(51,7,3.59);//Arkta student r jnno
    //Akhn amr school e 400 student assey. Ami constructor diye 400 line diye sobar informations input and output korte parbo
    
cout<<karim.cls<<" "<<karim.roll<<" "<<karim.gpa<<endl;
    return 0;
}

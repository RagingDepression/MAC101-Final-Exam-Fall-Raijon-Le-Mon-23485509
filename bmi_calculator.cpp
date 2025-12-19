#include <iostream>// Raijon Le'Mon 23485509
using namespace std;
//BMI Calc
// Weight (KG)/(Height*Height)(m)
//Underweight < 18.5
//Overweight >25
//normal weight 18.5-24.9
int main() {
    float weight, height;
    cout<< "weight(KG):";
    cin>> weight;
    cout<< "Height(M):";
    cin>> height;
    float bmi= weight/(height*height);
    if (bmi <= 18.5)
    cout<<"Underweight"<< endl;
    else if (bmi>=25)
    cout<<"Overweight"<< endl;
    else 
    cout<<"Normal Weight"<< endl;
    cout << "Your Bmi is:"<<bmi;
  


    return 0;
}
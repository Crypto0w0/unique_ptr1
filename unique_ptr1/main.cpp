#include <iostream>
using namespace std;
 
class Fraction
{
private:
       int m_numerator = 0;
       int m_denominator = 1;
 
public:
       Fraction(int numerator = 0, int denominator = 1) :
             m_numerator(numerator), m_denominator(denominator){
       }

       friend ostream& operator<<(ostream& out, const unique_ptr<Fraction> f1){
           out << f1->m_numerator << "/" << f1->m_denominator;
             return out;
       }
};
 
void printFraction(const unique_ptr<Fraction>* const ptr){
    if (ptr) cout << &ptr;
}
 
int main(){
       unique_ptr<Fraction>* ptr = new unique_ptr<Fraction>;
       printFraction(ptr);
}

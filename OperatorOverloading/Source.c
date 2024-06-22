///////////////////////////////////////////////////////////////////////////////////
#include <iostream> 
#include <cstdlib> 
//////////////////////////////////////////////////////////////////////////////////
class CPAint{
    private: 
        int n; 
    public: 
        CPAint() : n(0){
        }

        CPAint(int _n) : n(_n){
        }

        void show(const char* msg) const {
            if(msg)
                printf("%s:", msg); 
            printf("%d\n", n); 
        }

        CPAint operator+(const CPAint& other) const {
            CPAint result; 
            result.n = this->n + other.n; 
            return (result); 
        }

        CPAint operator-(const CPAint& other) const {
            CPAint result; 
            result.n = this->n - other.n; 
            return (result); 
        }

        CPAint operator*(const CPAint& other) const {
            CPAint result; 
            result.n = this->n * other.n; 
            return (result); 
        }

        CPAint operator/(const CPAint& other) const {
            CPAint result; 
            /* 
            when exception handling will be added 
            if(other.n == 0) 
                throw std::domain_error("cannot divide by zero"); 
            */
            result.n = this->n / other.n; 
            return (result); 
        }

        CPAint operator%(const CPAint& other) const {
            CPAint result; 
            /* 
            when exception handling will be added 
            if(other.n == 0) 
                throw std::domain_error("cannot divide by zero"); 
            */
            result.n = this->n % other.n; 
            return (result); 
        }

        CPAint operator<<(const CPAint& other) const {
            CPAint result; 
            result.n = this->n << other.n; 
            return result; 
        }

        CPAint operator>>(const CPAint& other) const {
            CPAint result; 
            result.n = this->n >> other.n; 
            return result; 
        }

        CPAint operator&(const CPAint& other) const {
            CPAint result; 
            result.n = this->n & other.n; 
            return result; 
        }

        CPAint operator|(const CPAint& other) const {
            CPAint result; 
            result.n = this->n | other.n; 
            return result; 
        }

        CPAint operator^(const CPAint& other) const {
            CPAint result; 
            result.n = this->n ^ other.n; 
            return result; 
        }

        CPAint operator~() const {
            CPAint result; 
            result.n = ~this->n; 
            return (result); 
        }

        CPAint operator&&(const CPAint& other) const {
            CPAint result; 
            result.n = this->n && other.n; 
            return (result); 
        }

        CPAint operator||(const CPAint& other) const {
            CPAint result; 
            result.n = this->n || other.n; 
            return (result); 
        }

        CPAint operator!() const {
            CPAint result; 
            result.n = !this->n; 
            return result; 
        }

        bool operator>(const CPAint& other) const {
            return this->n > other.n; 
        }

        bool operator>=(const CPAint& other) const {
            return this->n >= other.n; 
        }

        bool operator<(const CPAint& other) const {
            return this->n < other.n; 
        }

        bool operator<=(const CPAint& other) const {
            return this->n <= other.n; 
        }

        bool operator==(const CPAint& other) const {
            return this->n == other.n; 
        }

        bool operator!=(const CPAint& other) const {
            return this->n != other.n; 
        }
/////////////////////////BASIC OVER//////////////////////////
        CPAint operator++(){
            // PREINCREMENT 
            this->n = this->n + 1; 
            return *this; 
        }

        CPAint operator++(int){
            // POSTINCREMENT
            CPAint tmp(this->n); 
            this->n = this->n + 1; 
            return tmp; 
        }

        CPAint operator--(){
             // PREINCREMENT 
            this->n = this->n - 1; 
            return *this; 
        }

        CPAint operator--(int){
            CPAint tmp(this->n); 
            this->n = this->n - 1; 
            return tmp;
        }
}; 
////////////////////////////////////////////////////////////////////////////////////
int main(void){
    CPAint n1(20); 
    CPAint n2(7); 
    CPAint result; 

    n1.show("n1"); 
    n2.show("n2"); 

    result = n1 + n2; 
    result.show("summation"); 

    result = n1 - n2; 
    result.show("subtraction"); 

    result = n1 * n2;
    result.show("mutiplication"); 

    result = n1 / n2; 
    result.show("quotient");

    result = n1 % n2; 
    result.show("remainder");   

    result = n1 << n2; 
    result.show("left shift"); 

    result = n1 >> n2; 
    result.show("right shift"); 

    result = n1 & n2; 
    result.show("bitwise and"); 

    result = n1 | n2; 
    result.show("bitwise or"); 

    result = n1 ^ n2; 
    result.show("bitwise xor"); 

    result = ~n1; 
    result.show("bitwise not of n1"); 

    result = ~n2; 
    result.show("bitwise not of n2"); 

    result = n1 && n2; 
    result.show("logical and"); 

    result = n1 || n2; 
    result.show("logical or"); 

    result = !n1; 
    result.show("logical not of n1"); 

    result = !n2; 
    result.show("logical not of n2"); 

    result = n1 > n2; 
    result.show("greater than"); 

    result = n1 >= n2; 
    result.show("greater than or equal to"); 

    result = n1 < n2; 
    result.show("less than"); 

    result = n1 <= n2; 
    result.show("less than or equal to"); 

    result = n1 == n2; 
    result.show("equal to"); 

    result = n1 != n2; 
    result.show("not equal to"); 

    // before n1 == 20 
    // before n2 == 7 
    n1.show("n1 BEFORE PREINCREMENT"); // 20 
    result = ++n1; // CPAint::operator++ -> n1.n += 1 -> result.n = n1.n
    n1.show("n1 AFTER PREINCREMENT"); // 21
    result.show("result AFTER PREINCREMENT"); // 21  
    
    n2.show("n2 BEFORE POSTINCREMENT"); // 7 
    result = n2++; 
    n2.show("n2 AFTER POSTINCREMENT"); // 8 
    result.show("RESULT AFTER POSTINCREMENT"); // 7  

    n1.show("n1 BEFORE PREDECREMENT"); // 21
    result = --n1; 
    n1.show("n1 AFTER PREDECREMENT"); // 20
    result.show("result AFTER PREDECREMENT"); // 20 
    
    n2.show("n2 BEFORE POSTDECREMENT"); // 8 
    result = n2--; 
    n2.show("n2 AFTER POSTDECREMENT"); // 7 
    result.show("RESULT AFTER POSTDECREMENT"); // 8 

    return EXIT_SUCCESS; 
}
/////////////////////////////////////////////////////////////////////////////////////////////

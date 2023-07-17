
//#include "rabin_miller.hpp"
#include "rabin_miller.hpp"


mpz_class generate_prime(int bits)

{   mpz_class candidate = generate_random(bits);
    
   while (!(is_prime(candidate)))
   {
    candidate = generate_random(bits); 
   }
   return candidate;
}

int main()
{
    cout << "how many bits : ";
    int d;
    cin >> d;
    cout<<"the prime number is: "<<generate_prime(d)<<endl;
   
  
   

}
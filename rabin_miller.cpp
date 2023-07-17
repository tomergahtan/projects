#include "rabin_miller.hpp"






extern vector<int> primes;


bool is_prime(mpz_class candidate){
    if (primes.size() == 1){for (int i = 1; i < 100; ++i){small_primes();}}
    
    mpz_class a,d,g,x0;
    int k;
    for (int i = 1; i < primes.size(); ++i){
        a = primes[i];
        if (candidate%a == 0 && candidate !=a){ 
            
            return false;
        } 
    }

    k=0; d=candidate-1;
    while (d%2 == 0)
    {
        k+=1; d=d/2;
    }

    g=1;
    g=(g<<k)*d;
    
    if (g!=candidate-1){
        cout << "failure" << endl;
        exit(1);
    }
    
    
    
    int j = 0;
    while (j<30){

        a = rand_range(mpz_class("2"),candidate-1);
        x0  = pow_mod(a,d,candidate);
        j++;
        if (pow_mod(x0,d,candidate) == 1){continue;}
        
        for (int i = 0; i < k; ++i)
        {
            x0 = (x0*x0)%candidate;
            if (x0 == candidate-1 || x0 == 1){break;}
        }
        if (x0 != candidate-1 && x0 !=1){return false;}
    }


    return true;


    
    






}
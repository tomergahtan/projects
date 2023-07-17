
#include "rabin_miller.hpp"


map <int, vector<int>> dict;
int q = 2;

vector<int> primes = {1};


void small_primes(){
    


    while (true)
    {
        if (dict[q].size() == 0)
            {
                primes.push_back(q);
                dict[q*q].push_back(q);
                q++;
                return;
            }

        else
            {
                for (auto p:dict[q]){
                    dict[p+q].push_back(p);
                }
                dict.erase(q);
                q++;
            }
        



    }
    
    

    
}






#include "rabin_miller.hpp"
std::random_device rd;
std::mt19937 gen(rd());




string random_bitarray(int size){
    uniform_int_distribution<> random_number(48, 49);
    string d="";
    for (int i = 0; i < size; i++)
    {
        d  += random_number(gen);
    }
    return d;
}

mpz_class generate_random(int n){
    string number = "1";
    number+=random_bitarray(n-1);
    number+="1";
    mpz_class e;
    e.set_str(number,2);
    return e;
}

// compile like: g++ -o file2 file.cpp -lgmp -lgmpxx
/*
int main() 
{
    string g="745";
    mpz_class very_big_int(g);
    //cout << (1 < very_big_int) << endl;
    // Change this to the desired maximum range
    
    
    cout << (generate_random(1024))<<endl;

    return 0;

}*/



mpz_class pow_mod(mpz_class n, mpz_class exponent,mpz_class modi){

    mpz_class result;
    mpz_powm(result.get_mpz_t(),n.get_mpz_t(),exponent.get_mpz_t(),modi.get_mpz_t());
    return result;    
    }


    
mpz_class rand_range(mpz_class low,mpz_class high){

    if (low==high){return high;}
    if (low>high){cout << "Range is out of range"<<endl; exit(1);}

    string lower = low.get_str(2); // binary array
    string upper = high.get_str(2); //binary array
    mpz_class result;
    string dif="";

    int difference = upper.size()-lower.size();
    for (int i = 0; i < difference; i++)
    {
        dif+="0";
    }

    lower = dif+lower;
    string ne="";
    int shalthigh = 0,shaltlow = 0,ind = 0,ind2 = 0;
    uniform_int_distribution<> random_number(48, 49);
    while (shalthigh == 0 && ind < upper.size())
    {

        if (upper[ind] == '0') {ne+="0"; ind++;continue;}
        if (upper[ind] == '1') {ne+=random_number(gen);}
        if (upper[ind] > ne[ind]) {shalthigh++;}
        ind++;
    }
    ne+=random_bitarray(upper.size()-ind);
    
    result.set_str(ne,2);
    if (result<=low){return low;}
    if (result>=high){return high;}
    return result;
    
}

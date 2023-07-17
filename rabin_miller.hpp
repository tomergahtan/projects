






#include <stdarg.h>
#include <gmpxx.h>
#include <iostream>
#include <random>
#include <stdbool.h>
#include <math.h>
#include <string>
#include <strings.h>
#include <stdlib.h>
#include <string.h>
#include <array>
#include <variant>
#include <vector>
#include "boost/any.hpp"
#include "boost/variant.hpp"
using namespace std;

using namespace boost;

#include <map>
#include <typeinfo>


mpz_class generate_random(int n);
string random_bitarray(int size);
mpz_class rand_range(mpz_class low,mpz_class high);
mpz_class pow_mod(mpz_class n, mpz_class exponent,mpz_class modi);



void small_primes();



mpz_class gcdd(mpz_class A,mpz_class B);
mpz_class private_exponent(mpz_class x,mpz_class y);


bool is_prime(mpz_class candidate);
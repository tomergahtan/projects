# rabin_miller_cpp
this repository includes an implementation of rabin miller algorithm that generates very big prime numbers(according to client's choise) to RSA encryption.
# the entire program is written in c++.

compile the program :<br> g++ -std=c++17  -o rabin_miller.exe  main.cpp smallprimes.cpp rabin_miller.cpp verybigint.cpp  -lgmp -lgmpxx

#include <stdio.h>
#include <stdlib.h>
#include "cod.h"



int main()
{

criptare("peppers.bmp","encryption.bmp","secret_key.txt");
chi_patrat("encryption.bmp");
decriptare("encryption.bmp","decryption.bmp","secret_key.txt");





return 0;
}


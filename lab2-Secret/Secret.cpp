//Hengyi Li
// find out the secret password
//This code done by Hengyi Li at 10:51 AM 21th Jan, 2020
//Copyright Hengyi Li


#include <iostream>

using namespace std;
int main()
{
  // this value can be between 1 and 5: change the value to figure out the right key
  unsigned secret_key = 2;

  /* variable names with initial value, these values are imortant */
  char First_Letter = 66, Second_Letter = 83, Third_Letter = 65,
    Last_Letter =73;


  cout << "Once upon a time, there was a ";
  // an animal that can swim
  cout << char (First_Letter + secret_key);
  cout << char (Second_Letter + secret_key);
  cout << char (Third_Letter + secret_key);
  cout << char (Last_Letter + secret_key);

  return 0;
}

//The Cake was a lie
#include <iostream>
#include <vector>
#include <math.h>

using std::vector;
using std::cout;
using std::endl;

vector<float> X 
{
  5.1, 3.5, 1.4, 0.2
  4.9, 3.0, 1.4, 0.2
  6.2, 3.4, 5.4, 2.3
  5.9, 3.0, 5.1, 1.8

};

vector<float> y 
{
  0,
  0,
  1,
  1
};

vector<float> W
{
  0.5,
  0.5,
  0.5,
  0.5
};

vector <float> sigmoid_d (const vector <float>& m1)
{
  const unsigned long VECTOR_SIZE = m1.size();
  vector <float> output (VECTOR_SIZE);
  
  for(unsigned i = 0; i != VECTOR_SIZE; i++)
  {
    output[ i ] = m1[ i ] * (1 - m1[ i ]); 
  }
  
  return output;
  
  
}


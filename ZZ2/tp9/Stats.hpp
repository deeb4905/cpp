#ifndef STATS_HPP
#define STATS_HPP

#include <vector>
#include <iostream>
#include <iterator>
#include <fstream>

template<typename T>
class Stats {
   std::vector<T> data;
   T sum;
   double moy;
   double ecart;

 public:
   Stats():data(10), moy(.0) {}

   void push_back(const T& t) { data.push_back(t);}
   void compute()
   {
    //
   }

   void display(std::ostream& o = std::cout) const
   {
    typename
    std::vector<T>::const_iterator it;

    for(it = data.begin(); it!=data.end(); it++)
    {
        o << *it << " " << std::endl;
    }
   }

   // SINON : std::copy (v.begin(), v.end(), std::ostream_iterator<int> (std::cout, "\n"));
};

#endif
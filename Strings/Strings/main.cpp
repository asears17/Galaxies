//
//  main.cpp
//  Strings
//
//  Created by Drew Sears on 5/28/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class planet{
public:
    int p = 9;
    
};

class galaxy{
public:
    
    string g = "Milky Way";
    
};

class asteroid{
public:
    
    int n = 5;
    
};


int main()
{
    
    cout << "In the: " << galaxy::g << "There are " << planet:: p << " Planets and " << asteroid::n << " Asteroid belts" << endl;
    
    
  
}
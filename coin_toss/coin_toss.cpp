//***********************************************************
//
//  coin_toss.cpp
//
//  summary: simulate one million coin tosses.
//
//  inputs: no inputs.
//
//  Created by alcides sorto on 1/30/14.
//  Copyright (c) 2014 alcides sorto. All rights reserved.
//***********************************************************

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    int headsCount = 0;
    int tailsCount = 0;
    int choice;
    
    srand(unsigned(time(NULL)));
    
    for (int ix = 0; ix < 1000000; ix++)
    {
        choice = rand() % 2;
        
        switch (choice)
        {
            case 0:
                //cout <<"\nHeads!\n";
                headsCount++;
                break;
            case 1:
                //cout <<"\nATails!\n";
                tailsCount++;
                break;
            default:
                break;
        }
    }
    
    cout << "\n\nTotal number of heads: " << headsCount << "\nTotal Number of tails: " << tailsCount << "\n\n";

    system("pause>nul");
    return 0;
}

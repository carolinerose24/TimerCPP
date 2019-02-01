//
//  Timer.cpp
//  TimerCPP
//
//  Created by Jarman, Caroline on 2/1/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Timer.hpp"
using namespace std;


void Timer :: start()
{
    displayInformation();
}

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

void Timer :: displayInformation()
{
    cout << "The execution time is: " << executionTime << endl;
    cout << "In human time it is " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}

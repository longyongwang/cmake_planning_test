#include<iostream>
#include"process.h"
using std::cout;
using std::endl;

void Process::planProcess()
{
    cout << "this is planning prcoess" << endl;
    my_map.mapInfo();
    cout << "planning success!" << endl;
}
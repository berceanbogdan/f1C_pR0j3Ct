#include "Commander.h"
#include <tuple>
#include <iostream>
#include <cassert>

using namespace std;

bool isLowerLeft(pair<double, double> myPosition, pair<double, double> enemyPosition){
  return myPosition.first > enemyPosition.first && myPosition.second > enemyPosition.second;
}
bool isLowerRight(pair<double, double> myPosition, pair<double, double> enemyPosition){
  return myPosition.first < enemyPosition.first && myPosition.second > enemyPosition.second;
}
bool isUpperLeft(pair<double, double> myPosition, pair<double, double> enemyPosition){
  return myPosition.first > enemyPosition.first && myPosition.second < enemyPosition.second;
}
bool isUpperRight(pair<double, double> myPosition,pair<double, double> enemyPosition){
  return myPosition.first < enemyPosition.first && myPosition.second < enemyPosition.second;
}

const char* Commander::getDirection(pair<double, double> oldC, pair<double, double> newC){

}

void Commander::go(pair<double, double> myPosition, pair<double, double> enemyPosition){
  //TODO add special command after detecting position
  if (isLowerLeft(myPosition, enemyPosition)){
    cout<<"Lower Left";
  }else if (isLowerRight(myPosition, enemyPosition)){
      cout<<"Lower Right";
  }else if (isUpperLeft(myPosition, enemyPosition)){
      cout<<"Upper Left";
  }else if (isUpperRight(myPosition, enemyPosition)){
      cout<<"Upper Right";
  }

}

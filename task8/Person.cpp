#pragma once
#include "Person.h"
Person::Person() {
    float Weight =0.0 ;
    string mFirstName = "";
     int mAge = 0;

}
 Person::Person(float newWeight){
 float weight = newWeight;
 }
 Person::~Person(){

 }
 string Person( string newFirstName){
    string mFirstName = newFirstName;
 }
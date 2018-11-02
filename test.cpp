#include "test.h"
#include <iostream>
#include <string>
#include <vector>

test::test()
{

}
void test::runTests()
{
  cout<<"Hello world\n";
  constructor();
  testEmpty();
  testSize();
  testSearch();
  testAddBack();
  testAddFront();
  testRemoveBack();
  testRemoveFront();
}

void test::constructor(){
  cout<<"The size of an newly created list is 0: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();
  if(testVector.size()==0)
    cout<<"Passed\n";
  else
    cout<<"Failed\n";
}

void test::testEmpty(){
  emptyWithValues();
  emptyEmpty();
}
void test::testSize(){
  sizeOfEmpty();
  sizeOfOne();
  sizeOfMany();
}
void test::testSearch(){
  searchTrue();
  searchFalse();
  searchEmpty();
}
void test::testAddBack(){
  addBackEmpty();
  addBackNormal();
}
void test::testAddFront(){
  addFrontEmpty();
  addFrontNormal();
}
void test::testRemoveBack(){
  removeBackEmpty();
  removeBackNonEmpty();
}
void test::testRemoveFront(){
  removeFrontEmpty();
  removeFrontNonEmpty();
}


void test::emptyWithValues(){
  cout<<"isEmpty returns false on a non-empty list: ";
  LinkedListOfInts testableList;
  testableList.addFront(7);
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==1){
    if(testableList.isEmpty()==false)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
  else
    cout<<"Add front failed\n";
}


void test::emptyEmpty(){
  cout<<"isEmpty returns true on an empty list: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==0){
    if(testableList.isEmpty()==true)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
}


void test::sizeOfEmpty(){
  cout<<"Size returns 0 on an empty list: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==0){
    if(testableList.size()==0)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
}


void test::sizeOfOne(){
  cout<<"Size returns 1 on a list with one int: ";
  LinkedListOfInts testableList;
  testableList.addFront(7);
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==1){
    if(testableList.size()==1)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
  else
    cout<<"Add front failed\n";
}


void test::sizeOfMany(){
  cout<<"Size returns 5 on a list with 5 int's: ";
  LinkedListOfInts testableList;
  testableList.addFront(7);
  testableList.addFront(22);
  testableList.addFront(2);
  testableList.addFront(222);
  testableList.addFront(28);
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==5){
    if(testableList.size()==5)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
  else
    cout<<"Add front failed\n";
}


void test::searchTrue(){
  cout<<"Search for a valid int within a list: ";
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.addFront(2);
  testableList.addFront(3);
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==3){
    if(testableList.search(3)==true)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
  else
    cout<<"Add front failed\n";
}


void test::searchFalse(){
  cout<<"Search for an invalid int within a list: ";
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.addFront(2);
  testableList.addFront(3);
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==3){
    if(testableList.search(5)==false)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
  else
    cout<<"Add front failed\n";
}


void test::searchEmpty(){
  cout<<"Search for an int within an empty list: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==0){
    if(testableList.search(7)==false)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
}


void test::addBackEmpty(){
  cout<<"Add back to an empty list: ";
  LinkedListOfInts testableList;
  testableList.addBack(7);
  vector<int> testVector = testableList.toVector();

  if((testVector.size()==1) && (testVector.front()==7)){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


void test::addBackNormal(){
  cout<<"Add back to an existing list: ";
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addBack(2);
  testableList.addBack(3);
  vector<int> testVector = testableList.toVector();

  vector<int> baseVec;
  baseVec.push_back(1);
  baseVec.push_back(2);
  baseVec.push_back(3);
  if(testVector == baseVec){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


void test::addFrontEmpty(){
  cout<<"Add front to an empty list: ";
  LinkedListOfInts testableList;
  testableList.addFront(7);
  vector<int> testVector = testableList.toVector();

  if((testVector.size()==1) && (testVector.front()==7)){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


void test::addFrontNormal(){
  cout<<"Add front to an existing list: ";
  LinkedListOfInts testableList;
  testableList.addFront(3);
  testableList.addFront(2);
  testableList.addFront(1);
  vector<int> testVector = testableList.toVector();

  vector<int> baseVec;
  baseVec.push_back(1);
  baseVec.push_back(2);
  baseVec.push_back(3);

  if(testVector == baseVec){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


void test::removeBackEmpty(){
  cout<<"removeBack returns false when called on an empty list: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==0){
    if(testableList.removeBack()==false)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
}


void test::removeBackNonEmpty(){
  cout<<"Remove back of an existing list: ";
  LinkedListOfInts testableList;
  testableList.addFront(3);
  testableList.addFront(2);
  testableList.addFront(1);
  testableList.removeBack();
  vector<int> testVector = testableList.toVector();

  vector<int> baseVec;
  baseVec.push_back(1);
  baseVec.push_back(2);

  if(testVector == baseVec){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


void test::removeFrontEmpty(){
  cout<<"Remove front returns false when called on an empty list: ";
  LinkedListOfInts testableList;
  vector<int> testVector = testableList.toVector();

  if(testVector.size()==0){
    if(testableList.removeFront()==false)
      cout<<"Passed\n";
    else
      cout<<"Failed\n";
  }
}


void test::removeFrontNonEmpty(){
  cout<<"Remove front returns true on an existing list: ";
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addBack(2);
  testableList.addBack(3);
  testableList.removeFront();
  vector<int> testVector = testableList.toVector();

  vector<int> baseVec;
  baseVec.push_back(2);
  baseVec.push_back(3);

  if(testVector == baseVec){
    cout<<"Passed\n";
  }
  else
    cout<<"Failed\n";
}


test::~test()
{

}

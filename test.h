#ifndef TEST_H
#define TEST_H
#include "LinkedListOfInts.h"
#include <stdexcept>
using namespace std;

class test
{
    public:
    //This will call all your test methods
    void runTests();
    //constructor
    test();
    ~test();

    private:
      void constructor();

      void testEmpty();
      void testSize();
      void testSearch();
      void testAddBack();
      void testAddFront();
      void testRemoveBack();
      void testRemoveFront();

      void emptyWithValues();
      void emptyEmpty();

      void sizeOfEmpty();
      void sizeOfOne();
      void sizeOfMany();

      void searchTrue();
      void searchFalse();
      void searchEmpty();

      void addBackEmpty();
      void addBackNormal();

      void addFrontEmpty();
      void addFrontNormal();

      void removeBackEmpty();
      void removeBackNonEmpty();

      void removeFrontEmpty();
      void removeFrontNonEmpty();






};
#endif

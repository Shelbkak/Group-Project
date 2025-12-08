#ifndef PIZZA_H
#define PIZZA_H
//PIZZA.H
#include <iostream>
#include <random>
#include <ctime>
#include <string>

using namespace std;

struct Pizza{
   int cust_ID;// customer ID
   string topping;
   string sizes;
   bool complete;
   Pizza *nextOrder;
   Pizza(int CID, string T, string S, bool C) : cust_ID(CID), topping(T), sizes(S), complete(C), nextOrder(nullptr) {}
};

class PizzaOrders{
    public:
        PizzaOrders();
        PizzaOrders(int customer_ID, string toppings, string size, bool isCompleted);
        ~PizzaOrders();
        
        void AddNew(int customer_ID, string toppings, string size);
        
        bool isCompleted();
        void removeOrder(int customer_ID);
        
        void completeOrder(int customer_ID);
        
        void searchforpizza(int customer_ID);
        void displayIncomplete();
        
    private:
        Pizza* header;
        int CID;// customer ID
        string T;
        string S;
        bool m_isCompleted;
};

#endif //PIZZA_H

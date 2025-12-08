#ifndef GROUP_PROJECT_D_PIZZAORDERS_H
#define GROUP_PROJECT_D_PIZZAORDERS_H
#include <string>
using namespace std;

struct Pizza{
    int cust_ID;// customer ID
    string topping;
    string sizes;
    bool complete;
    Pizza* prevOrder;
    Pizza *nextOrder;
    Pizza(int CID, string T, string S, bool C) : cust_ID(CID), topping(T), sizes(S), complete(C), nextOrder(nullptr),
    prevOrder(nullptr){}
};

class D_PizzaOrders
{
    public:
        D_PizzaOrders(); // no-args/default constructor
        D_PizzaOrders(string toppings, string size); // argument constructor
        ~D_PizzaOrders(); // deconstructor

        void D_AddNew(int customer_ID, string toppings, string size); // add a new order to the list

        bool D_isCompleted(); // to determine if a order has been completed or not
        void D_removeOrder(int customer_ID); // removes a order

        void D_completeOrder(int customer_ID); // completes a non complted order

        void D_searchforpizza(int customer_ID); // searches for a specfic order
        void D_displayIncomplete(); // displays only non completed orders
    private:
        Pizza* header;
        int CID; // customer id
        string T; // pizza toppings
        string S; // pizza sizes



};


#endif //GROUP_PROJECT_D_PIZZAORDERS_H

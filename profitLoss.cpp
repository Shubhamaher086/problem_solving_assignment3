//Accept cost price(CP) and Selling price(SP) of an item. 
//Calculate the ammount of PROFIT/LOSS made by the seller and print result.

#include<iostream>
using namespace std;

void profitLoss(float cp,float sp)                              //declare a function to calculate profit and loss
{
    float profit,loss;
    if(cp>sp)                                                   //calculate loss
    {
        loss=cp-sp;
        cout<<"Total Loss on product is : "<<loss<<endl;
    }
    else
    {
        profit=sp-cp;                                           //calculate profit
        cout<<"Total Profit on product is : "<<profit<<endl;
    }
}
int main()
{
    float cp,sp;
    cout<<"Enter the cost price of product : ";
    cin>>cp;                                                    //take a input value of cost price
    cout<<"Enter the sale price of product : ";
    cin>>sp;                                                    //take a input value of selling price

    profitLoss(cp,sp);                                          //calling profitloss function
    return 0;
}


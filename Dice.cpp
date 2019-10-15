#include <iostream>        //header file

using namespace std;

int main()               //main function file        

{

    int dice1;          //dice1 

    int dice2;          //dice2

    int sum;            //sum

    cout << "dice 1 number is: "<<endl;      //display request for dice1 input
    cin>>dice1;                         //enter dice1 value
    
    cout<<"dice 2 number is:"<<endl;         //display request for dice2 input
    cin>>dice2;                       //enter dice2 value
    
    sum=dice1+dice2;   //sum of the dice
    cout<<"the sum is: "<<sum;   //display the sum



    if (sum == 7 || sum == 11)     //if condition for win



        {

            cout << "   ****You won***   ";   //result is displayed if won

        }


    else if (sum == 2 || sum == 3 || sum == 12)      //condition for lost game


        {
            cout << "   *****Better luck next time****  ";      //result is displayed if lost

        }


         //condition for another roll
    else if (sum == 4 || sum ==5 || sum == 6 || sum == 8 || sum == 9 || sum == 10)


        {

            cout << "  *****Try again****   ";   //result is displayed to roll again

        }



    return 0;    //return value

}

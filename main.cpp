#include <iostream>
#include"AND.h"
#include"OR.h"
#include"NAND.h"
#include"NOT.h"
#include"NOR.h"
#include "XNOR.h"
#include "XOR.h"
#include<fstream>
#include<ctime>
#include<chrono>

using namespace std;

int main()
{
    int choice,choice1;
    Wire w;
        cout<<"\t=====================================================================================\n";
        cout<<"\n";
        cout<<"\t\n\t\t---------------------LOGIC GATES IMPLEMENTATION------------------------    "<<endl;
        cout<<"\t\tMENU : "<<endl;
        cout<<"\t\t------"<<endl;
        cout<<"\t\t\t1.] ADD AN 'AND' GATE \n\t\t\t2.] ADD AN 'OR' GATE \n\t\t\t3.] ADD AN 'NOT' GATE \n\t\t\t4.] ADD A 'NAND' GATE \n\t\t\t5.] ADD A 'NOR' GATE \n\t\t\t6.] ADD AN 'XOR' GATE \n\t\t\t7.] AND AN 'XNOR' GATE \n\t\t\t8.] EXIT PROGRAM\n\n "<<endl;
        cout<<"\t=====================================================================================\n\n\n"<<endl;
        cout<<"\nEnter the choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''AND GATE'' \n";
                   AND GATES;
                   GATES.read();
                   GATES.calcResult(GATES.getInput1(), GATES.getInput2());
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                    break;
                }
            case 2:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''OR GATE'' \n";
                   OR GATES;
                   GATES.read();
                   GATES.calcResult(GATES.getInput1(), GATES.getInput2());
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                    break;
                }
            case 3:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''NOT GATE'' \n";
                   NOT GATES;
                   bool input;
                   GATES.read();
                   input=GATES.getinput();
                   GATES.calcResult(input);
                   GATES.display();
                   GATES.addLogEntry();
                   break;
                }
            case 4:
                {

                   cout<<"\n\t YOU ARE ADDING A ''NAND GATE'' \n";
                   NAND GATES;
                   GATES.read();
                   GATES.calcResult();
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                   break;

                }
            case 5:
                {
                   cout<<"\n\t YOU ARE ADDING A ''NOR GATE'' \n";
                   NOR GATES;
                   GATES.read();
                   GATES.calcResult();
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                   break;
                }
            case 6:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''X-OR GATE'' \n";
                   XOR GATES;
                   GATES.read();
                   GATES.calcResult(GATES.getInput1(), GATES.getInput2());
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                   break;

                }

            case 7:
                {

                   cout<<"\n\t YOU ARE ADDING AN ''X-NOR GATE'' \n";
                   XNOR GATES;
                   GATES.read();
                   GATES.calcResult();
                   GATES.display();
                   GATES.addLogEntry();
                   w.getOutput(GATES.getOuput());
                   break;
                }
            case 8:
                {
                    exit(0);


                }

        }
    do{
            Wire w1, w2;
            w1 = w;
        cout << "\n\nHow would you like to add the next gate?" << endl;
        cout << "1. Series\n2. Parallel\nPress any no to exit : ";
        cin>>choice1;
        switch(choice1){
        case 1:{


        cout<<"\t=====================================================================================\n";
        cout<<"\n";
        cout<<"\t\n\t\t---------------------LOGIC GATES IMPLEMENTATION------------------------    "<<endl;
        cout<<"\t\tMENU : "<<endl;
        cout<<"\t\t------"<<endl;
        cout<<"\t\t\t1.] ADD AN 'AND' GATE \n\t\t\t2.] ADD AN 'OR' GATE \n\t\t\t3.] ADD AN 'NOT' GATE \n\t\t\t4.] ADD A 'NAND' GATE \n\t\t\t5.] ADD A 'NOR' GATE \n\t\t\t6.] ADD AN 'XOR' GATE \n\t\t\t7.] AND AN 'XNOR' GATE \n\t\t\t8.] EXIT PROGRAM\n\n "<<endl;
        cout<<"\t=====================================================================================\n\n\n"<<endl;
        cout<<"\nEnter the choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''AND GATE'' \n";
                   AND GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(w.returnInput(), w.returnInput());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                    break;
                }
            case 2:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''OR GATE'' \n";
                   OR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(w.returnInput(), w.returnInput());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                    break;
                }
            case 3:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''NOT GATE'' \n";
                   NOT GATES[100];
                   int i=0;
                   bool input;
                   //GATES[i].read();
                   input=GATES[i].getinput();
                   GATES[i].calcResult(input);
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                    break;
                }
            case 4:
                {

                   cout<<"\n\t YOU ARE ADDING AN ''NAND GATE'' \n";
                   NAND GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                   break;



                }
            case 5:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''NOR GATE'' \n";
                   NOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                   break;

                }
            case 6:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''X-OR GATE'' \n";
                   XOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(w.returnInput(), w.returnInput());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                   break;

                }

            case 7:
                {

                   cout<<"\n\t YOU ARE ADDING AN ''X-NOR GATE'' \n";
                   XNOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   w2.getOutput(GATES[i].getOuput());
                   break;
                }
            case 8:
                {
                    exit(0);


                }

        }
            break;

    }
            case 2:
                {


        cout<<"\t=====================================================================================\n";
        cout<<"\n";
        cout<<"\t\n\t\t---------------------LOGIC GATES IMPLEMENTATION------------------------    "<<endl;
        cout<<"\t\tMENU : "<<endl;
        cout<<"\t\t------"<<endl;
        cout<<"\t\t\t1.] ADD AN 'AND' GATE \n\t\t\t2.] ADD AN 'OR' GATE \n\t\t\t3.] ADD AN 'NOT' GATE \n\t\t\t4.] ADD A 'NAND' GATE \n\t\t\t5.] ADD A 'NOR' GATE \n\t\t\t6.] ADD AN 'XOR' GATE \n\t\t\t7.] AND AN 'XNOR' GATE \n\t\t\t8.] EXIT PROGRAM\n\n "<<endl;
        cout<<"\t=====================================================================================\n\n\n"<<endl;
        cout<<"\nEnter the choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''AND GATE'' \n";
                   AND GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(GATES[i].getInput1(), GATES[i].getInput2());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                    break;
                }
            case 2:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''OR GATE'' \n";
                   OR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(GATES[i].getInput1(), GATES[i].getInput2());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                    break;
                }
            case 3:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''NOT GATE'' \n";
                   NOT GATES[100];
                   int i=0;
                   bool input;
                   //GATES[i].read();
                   input=GATES[i].getinput();
                   GATES[i].calcResult(input);
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                    break;
                }
            case 4:
                {

                   cout<<"\n\t YOU ARE ADDING AN ''NAND GATE'' \n";
                   NAND GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   break;


                }
            case 5:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''NOR GATE'' \n";
                   NOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   break;

                }
            case 6:
                {
                   cout<<"\n\t YOU ARE ADDING AN ''X-OR GATE'' \n";
                   XOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult(GATES[i].getInput1(), GATES[i].getInput2());
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   break;

                }

            case 7:
                {

                   cout<<"\n\t YOU ARE ADDING AN ''X-NOR GATE'' \n";
                   XNOR GATES[100];
                   int i=0;
                   //GATES[i].read();
                   GATES[i].calcResult();
                   GATES[i].display();
                   GATES[i].addLogEntry();
                   i++;
                   break;
                }
            case 8:
                {
                    exit(0);


                }

        }

        break;
                }
    }
    }while(choice1>0 && choice1<=2);



}

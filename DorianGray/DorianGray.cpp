// DorianGray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    //Intro Paragraph
    std::cout << "This program calculates the cost\n";
    std::cout << "of a portrait sitting. The price depends\n";
    std::cout << "on the number of subjects in the portrait\n";
    std::cout << "and day of the week.\n";

    
    
    
    int finalCharge = 0;

    std::cout << "Enter the number of subjects: \n";

    //change this to a user input variable later.
    int numOfSubjects = 0;

        //There is probably a more elegant way I could do this, BUT
        //I'm keeping it simple for now.

        if (numOfSubjects == 1)
        {
            finalCharge = 100;
        }

        else if (numOfSubjects == 2)
        {
            finalCharge = 130;
        }

        else if (numOfSubjects == 3)
        {
            finalCharge = 150;
        }

        else if (numOfSubjects == 4)
        {
            finalCharge = 165;
        }

        else if (numOfSubjects == 5)
        {
            finalCharge = 175;
        }

        else if (numOfSubjects == 6)
        {
            finalCharge = 180;
        }

        else if (numOfSubjects >= 7)
        {
            finalCharge = 185;
        }
        

        std::cout << "Will the sitting be on a weekend? (0=no, 1=yes): \n";

        int isWeekend = 0;
        double weekendCharge = .20;

        if (isWeekend == 1)
        {
            finalCharge * weekendCharge;
        }  

        std::cout << "For a sitting with " << numOfSubjects << " subjects,\n";
        if (isWeekend == 0)
        {
            std::cout << "on a weekday, the cost is" << finalCharge << "\n";
        }
        else if (isWeekend == 1)
        {
            std::cout << "on a weekend, the cost is" << finalCharge << "\n";
        }

        std::cout << "Press any key to continue . . .\n";
    
    
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

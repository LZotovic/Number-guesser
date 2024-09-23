#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout<<"Guess the number"<<std::endl;
    std::cout<<"Would you like to guess the number to 10, 100 or 1000? ";

    int wanted_number;

    std::cin>>wanted_number;

   
    if(wanted_number!=10 && wanted_number!=100 && wanted_number!=1000)
    {
        std::cout<<"Error. Please enter either '10', '100' or '1000' "<<std::endl;
        return 1;
    }

    srand(time(NULL));

    int random;

    if(wanted_number==10)
    {
        random=rand()%10+1;
        // std::cout<<"The random number is "<<random<<std::endl; shows the random number
    }
    if(wanted_number==100)
    {
        random=rand()%100+1;
        // std::cout<<"The random number is "<<random<<std::endl; shows the random number
    }
    if(wanted_number==1000)
    {
        random=rand()%1000+1;
        // std::cout<<"The random number is "<<random<<std::endl; shows the random number
    }

    std::cout<<"How many tries would you like to have?"<<std::endl;
    
    int tries;

    std::cin>>tries;

    int answer;

    for(int i=1; i<=tries; i++)
    {
        std::cout<<"Try: "<<i<<" what's you guess? ";
        std::cin>>answer;

        if(answer==random)
        {
            std::cout<<" YOU ARE RIGHT "<<random<<" is the correct number";
            break;
        }
        else if (answer!=random)
            std::cout<<"No, try again you have "<<tries-i<<" tries left"<<std::endl;
        
        if(i==tries)
        {
            std::cout<<"You are out of tries, better luck next time"<<std::endl;
            std::cout<<"The random number is "<<random<<std::endl;
            break;
        }        
    }

    return 0;
}

// Made by LZotovic
#include <iostream>
#include <random>
#include <string>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;
void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main(){
    std::string gambleChoice;
    int horseChoice;
    int wager;

    std::cout << "You're at a horse race." << std::endl;
    std::cout << "If you bet on a horse, you'll double your money if it wins" << std::endl;
    std::cout << "and lose everything if it doesn't." << std::endl; 
    std::cout << "Would you like to bet on a horse? (y/n)" << std::endl;
    std::cin >>  gambleChoice;

    if (gambleChoice == "y"){
        std::cout << "Choose your horse: (0,1,2,3,4)" << std::endl;
        std::cin >> horseChoice;
        std::cout << "How much money would you like to wager? (in dollars)" << std::endl;
        std::cin >> wager;
    }

	int horses[5] = {0,0,0,0,0};
	bool keepGoing = true;

	while(keepGoing) {
    
	    for (int hn = 0; hn < NUM_HORSES; hn++){
           	 advance(hn,horses);
	         if (isWinner(hn,horses)){
       	   	      std::cout << "HORSE " << hn << " WINS!!!" << std::endl;
               		 keepGoing = false;
           	 }
           	 else {
           		 printLane(hn,horses);
          	  }
        }
        std::cout << "Press ENTER for another round";
        std::cin.ignore();        

    }
}

void advance(int hn,int* horses){
    int coin = dist(rd);
    if (coin == 0){
        horses[hn] ++;
    }
}

void printLane(int hn, int* horses){
    for (int i = 0; i < RACE_LENGTH; i++){
        if (i == horses[hn]){
            std::cout << hn;
        }
        
        else {
            std::cout << ".";
        }
    }
    std::cout << "" << std::endl;    
}

bool isWinner(int hn, int* horses){
    if (horses[hn] == 15){
        return true;
    }
    else{
        return false;
    }
}



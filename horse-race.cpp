#include <iostream>
#include <random>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1)
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;
void advance(int, int*);
void printLine(int, int*);


int main(){
	int horses[5] = {1,2,3,4,5};
	bool keepGoing = true;

	while(keepGoing) {

		for (int hn = 0; hn < NUM_HORSES; hn++){
            advance(hn,horses);
            printLine(hn,horses);
            }
        keepGoing = false;
        }
    }


void advance(int hn,int* horses){
    std::cout << "test";
    }

void printLine(int hn, int* horses){
    std::cout << "test";
    }




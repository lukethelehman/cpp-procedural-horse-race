# cpp-procedural-horse-race
CS-121 Horse race program done procedurally

**algorithm**

```

int main()

	create array horses - initialize each value at zero 
	create bool keepGoing
	
	while keepGoing 
		for hn in range 4 add 1 to hn
			advance(hn, horses)
			printLane(hn, horses)
	print "press enter for another turn"


void advance(int horseNum, int* horses)
	create int coin 
	generate random number 0-1 and assign to coin 
	if coin equals 0 
		add 1 to horses[horseNum]

void printLane(int horseNum, int* horses)
	for i in range 15, i increases by 1
		if i = horses[horseNum)
			print horseNum
		else
			print "."

bool isWinner(int horseNum, int* horses)
	if horses[horseNum] is greater than or equal to 15
		print "Horse <horseNum> wins!

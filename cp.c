//This is for the Consumer and Producer assignment
//My name is Christy Cecil 
//This class is CST-221

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

const unsigned int maxBufferSize = 50;
deque<int> buffer;
std::condition_variable cond;
	
void producer(int 1) {
	
	int i;
	
	while(1){
		buffer.push_back(1);
		cout <<"Produced: " << 1 << endl;
		1--;
		
	}
	
}

void consumer( ) {
	
	int i;
	
	while(1){
		
		buffer.push_back(1);
		cout <<"Consumed: " << 1 << endl;
		1--;
		
	}
}

int main() {
	std::thread t1(producer, 100);
	std::thread t2(consumer);
}

//This whole thing did not work for me at all :(
//I definetely needed help on this one. 

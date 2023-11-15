// Program that calculates estimated transmission time from file size
// By: paulusel
#include <iostream>

int main(){

	const float RATE = 960; // Bytes per second

	double size; // in bytes
	double time; // in seconds
	
	std::cout << "Enter file size in Bytes." << std::endl;
	std::cin >> size;

	//input check
	if( size < 0 ){
		std::cout << "Error. File size must be non-negative!." << std::endl;

		return 1;
	}

	time = size/RATE;

	std::cout << "It will take about " << time << " seconds to transmit the file." << std::endl;

	return 0;
}

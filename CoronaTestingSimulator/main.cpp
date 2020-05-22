#include <vector>
#include <stdlib.h>
using namespace std;


int main(int argc,char* argv[]) {
	//Get the simulation parameters
	double simulation_time = atof(argv[1]);
	int station_num = atof(argv[2]);
	double client_arrival_rate = atof(argv[3]);
	double station_proccesing_rate = atof(argv[4]);
	vector<double> client_arrival_probability;
	double probability = 0;
	for (int i = 5; i < argc; ++i) {
		probability = atof(argv[i]);
		client_arrival_probability.push_back(probability);
	}

}
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>  //use setprecision function
#include "BMI.h"
using namespace std;

int main()
{
    BMI bmi;
    float HEIGHT, WEIGHT, BMI_value;
    string category;

    ifstream infile("file.in", ios::in);
    if(!infile){
        cerr << "Failed opening!!" << endl;
        exit(1);
    }

    ofstream outfile("file.out", ios::out);
    if(!outfile){
        cerr << "Failed opening!!" << endl;
        exit(1);
    }
    while(infile >> HEIGHT >> WEIGHT){
        bmi.setWeight(WEIGHT);
        bmi.setHeight(HEIGHT);

        if(bmi.getHeight()!=0){
        BMI_value = bmi.compute_BMI();
        category = bmi.Category(BMI_value);

        outfile << setprecision(4) << BMI_value << "\t" << category << endl;
	}  
	//use setprecision function to decide the digits of the BMI_value
    }
    return 0;
}
 

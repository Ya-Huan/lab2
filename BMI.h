#include <iostream>
#include <string>
using namespace std;

class BMI{
    public:
        void setWeight(float WEIGHT);
        void setHeight(float HEIGHT);
        float getWeight();
        float getHeight();
        float compute_BMI();
        string Category(float BMI_value);
    private:
        float height, weight;
};

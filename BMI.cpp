#include "BMI.h"

void BMI::setWeight(float WEIGHT){
    weight = WEIGHT;
}
void BMI::setHeight(float HEIGHT){
    height = HEIGHT;
}
float BMI::getWeight(){
    return weight;
}
float BMI::getHeight(){
    return height;
}
float BMI::compute_BMI(){
    float BMI_value = weight / ((height/100)*(height/100));
    return BMI_value;
}
string BMI::Category(float BMI_value){
    string str1 = "Very severely underweight";
    string str2 = "Severely underweiht";
    string str3 = "Underweight";
    string str4 = "Normal";
    string str5 = "Overweight";
    string str6 = "Obese Class I (Moderately obese)";
    string str7 = "Obese Class II (Severely obese)";
    string str8 = "Obese Class III (Very severely obese)";

    if (BMI_value < 15){
        return str1;
    }
    else if (BMI_value >= 15.0 && BMI_value < 16.0){
        return str2;
    }
    else if (BMI_value >= 16.0 && BMI_value < 18.5){
        return str3;
    }
    else if (BMI_value >= 18.5 && BMI_value < 25){
        return str4;
    }
    else if (BMI_value >= 25 && BMI_value < 30){
        return str5;
    }
    else if (BMI_value >= 30 && BMI_value < 35){
        return str6;
    }
    else if (BMI_value >= 35 && BMI_value < 40){
        return str7;
    }
    else if (BMI_value >= 40){
        return str8;
    }
}
 

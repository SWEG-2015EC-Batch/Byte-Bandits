// calculate BMI

#include <iostream>
using namespace std;

int main(){
    double weight, height;
    char sex;
    int num;

    cout << "specify the number of operations you want"<< endl;
    cin >> num;

    for (size_t i = 0; i < num; i++){
        
        cout << "person: " << i+1 <<endl;
        cout << "please enter your weight: "  <<endl;
        cin >> weight;
        cout << "please enter your height: " << endl;
        cin >> height;
        cout <<"please choose 'm' for male and 'f' for female"  << endl;
        cin >> sex;
        
        double bmi = (weight/(height * height));

        
        if ( bmi >= 30){
        cout << "your BMI is " << bmi<< endl;
        cout << "obesity" << endl;
        }
    
        else {      
            
            if ((sex =='f') || (sex == 'F')){
                
                cout <<"you are a female" << endl; 
                cout << "your BMI is " << bmi << endl;

            if(bmi < 18.5){
                cout << "under weight" << endl;
            }
            else if((bmi >= 18.5 ) && (bmi < 24)){
                cout << "normal weight" << endl;
            }
            else if((bmi >= 24 ) && (bmi < 30)){
                cout << "over weight" << endl;
            }

            }  
            
            else if ((sex == 'm') || (sex == 'M')){
                cout <<"you are a male" << endl; 
                cout << "your BMI is " << bmi << endl;
            
            if(bmi < 20.5){
                cout << "under weight" << endl;
            }
            else if((bmi >= 20.5 ) && (bmi < 25)){
                cout << "normal weight" << endl;
            }
            else if((bmi >= 25 ) && (bmi < 30)){
                cout << "over weight" << endl;
            }

            }

        else {
            cout << "please specify your gender accordingly"<< endl;
        }




    }   }
}
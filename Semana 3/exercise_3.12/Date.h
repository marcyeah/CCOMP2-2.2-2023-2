#include <iostream>
#include <string>

class Date {
    public:
        Date (int m, int d, int y) : month(m), day(d), year(y){ 
            if ((m > 12) || (m < 1)) {
                month = 1;
            }   
        }

        void setMonth(int m){
            if((m >= 1) && (m <= 12)){
                month = m; 
            }
            else{
                month = 1; 
            }
        }
        void setDay(int d){
            day = d;
        }
        void setYear(int y){
            year = y; 
        }


        int getMonth() const{
            return month; 
        }
        int getDay() const{
            return day; 
        }
        int getYear() const{
            return year; 
        }

        void displayDate(){
            std::cout << getMonth() << " / " << getDay() << " / " << getYear() << std::endl;
        }

    private:
         int month;
         int day; 
         int year; 
};
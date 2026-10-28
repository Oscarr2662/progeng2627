#include <iostream>

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
        ly = (year % 400 == 0) ||
             (year % 4 == 0 && year % 100 != 0);

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task
    int days = 31;
    if ( m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        days = 30;
    }else if(m1 == 2){
        days = 28;
        if(leap_year(y1)){
            days = 29;
        }
    }

    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;

    if (d2 > days){
        d2 = 1;
        m2++;
    }

    if( m2 > 12){
        m2 = 1;
        y2++;
    }
}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1;
    int d2, m2, y2;

    std::cout << "Enter a valid date (day month year): ";
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout <<d2 << "/" << m2 << "/" << y2 << std::endl;
}


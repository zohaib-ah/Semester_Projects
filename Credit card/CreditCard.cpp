#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>
using namespace std;

void show(string x, int a, int b);
void color(int y);

int main() {
    int sum1=0, sum2=0, sum;
    int count ;
    long long divisor = 10;
    long long CreditCardNumber;
    char continue1;

    do {
        do {
            system("cls");
            show("\tPlease enter your credit card number\t", 6, 1);
            color(15);
            cout<<"\t";cin>>CreditCardNumber;
            color(7);
            cout<<endl;
        } while (CreditCardNumber<=0);

        long long cardnumber = CreditCardNumber;
        while(cardnumber > 0) {
            int lastdigit = cardnumber % 10;
            sum1 = sum1 + lastdigit;
            cardnumber = cardnumber / 100;
        }

        long long cardnumber1 = CreditCardNumber / 10;
        while(cardnumber1 > 0) {
            long long lastdigit = cardnumber1 % 10;
            int multiplyer = lastdigit * 2;
            sum2 = sum2 + (multiplyer % 10 + multiplyer / 10);
            cardnumber1 = cardnumber1 / 100;
        }

        sum = sum1 + sum2;

        long long cardnumber2 = CreditCardNumber;
        while(cardnumber2 > 0) {
            cardnumber2 = cardnumber2 / 10;
            count++;
        }

        long long cardnumber3 = CreditCardNumber;

        int first_one= cardnumber3 / pow(10, count-1);
        int first_two= cardnumber3 / pow(10, count-2);
        int first_three= cardnumber3 / pow(10, count-3);
        int first_four= cardnumber3 / pow(10, count-4);
        int first_six= cardnumber3 / pow(10, count-6);

        if(sum%10 == 0) {
            show("\tSuccess..!", 2,7);
            if(first_one ==4 && (count ==13 || count ==16)) {
                show("\tVisa", 3, 7);
            } else if((first_two ==34 || first_two ==37) && count ==15) {
                show("\tAmerican Express",3,7);
            } else if(first_two ==60 || first_four ==6521 || first_four ==6522 && (count ==16)) {
                show("\tCredit Card: RuPay",3,7);
            } else if((first_two>50 && first_two<56) && count ==16) {
                show("\tMasterCard",3,7);
            } else if(first_two ==31 && count ==19) {
                show("\tChina T-Union",3,7);
            } else if(first_two ==62 && (count>15 && count<20)) {
                show("\tChina UnionPay",3,7);
            } else if(first_two ==36 && (count>13 && count<20)) {
                show("\tDiners Club International",3,7);
            } else if((first_two ==38 || first_two ==39 || first_four ==3095 || (first_three>299 && first_three<306)) && (count>15 && count<20)) {
                show("\tDiners Club International",3,7);
            } else if((first_two ==64 || first_two ==65 || first_four ==6011 || (first_six>622125 && first_six<622926) || (first_six>623999 && first_six<627000) || (first_six>628199 && first_six<628900)) && (count>15 && count<20)) {
                show("\tDiscover Card",3,7);
            } else if(first_three ==636 && (count>15 && count<20)) {
                show("\tInterPayment",3,7);
            } else if((first_three>636 && first_three<640) && (count ==16)) {
                show("\tInstaPayment",3,7);
            } else if(first_four ==5610 || (first_six>560220 && first_six<560226) && (count ==16)) {
                show("\tBankcard",3,7);
            } else if((first_four ==6759 || first_six ==676770 || first_six ==676774) && (count>11 && count<20)) {
                show("\tMaestro (UK)",3,7);
            } else if((first_two ==50 ||(first_two>55 && first_two<70)) && (count>11 && count<20)) {
                show("\tMaestro",3,7);
            } else if((first_six>979199 && first_six<979290) && (count ==16)) {
                show("\tTroy",3,7);
            } else if((first_four>3527 && first_four<3590 ) && (count>15 && count<20)) {
                show("\tJCB",3,7);
            } else {
                show("Invalid",4,7);
            }
        } else {
            show("Invalid",4,7);
        }

        if(sum%10==0) {
            show("Case__1 Sum: ", 2,7);
            cout<<sum1<<endl;
            show("Case__2 Sum: ", 2,7);
            cout<<sum2<<endl;
            show("Total Sum: ", 2,7);
            cout<<sum<<endl;
        } else {
            show("Case__1 Sum: ", 10,7);
            cout<<sum1<<endl;
            show("Case__2 Sum: ", 10,7);
            cout<<sum2<<endl;
            show("Total Sum: ", 4,7);
            color(4);
            cout<<sum<<endl;
            color(7);
        }

        cout<<"Do you want to continue(Y/N): ";
        cin>>continue1;

    } while (continue1=='y' || continue1=='Y');

    return 0;
}

void color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void show(string x, int a, int b) {
    if(x=="\tPlease enter your credit card number\t") {
        color(a);
        cout<<"---------------------------------------------------"<<endl;
        color(b);
        cout<<x<<endl;
        color(a);
        cout<<"---------------------------------------------------"<<endl;
        color(7);
    } else if(x=="\tSuccess..!" || x=="Case__1 Sum: " || x=="Case__2 Sum: " || x=="Total Sum: ") {
        if(x=="Case__1 Sum: ") {
            cout<<endl;
            cout<<"---------------------------------------------------"<<endl;
            color(a);
        } else
            color(a);
            cout<<x;
            color(7);
    } else {
        color(a);
        cout<<x<<endl;
        color(7);
    }
}

#include <TimerOne.h>

#define A 5
#define B 7
#define C 11
#define D 9
#define E 8
#define F 6
#define G 12
#define H 10

#define D1 A3
#define D2 A2
#define D3 A1
#define D4 A0

char digits[5];
int time[3]={0}; //seg-min-hor
void updateDigits(){
    digits[1]=time[0]%10;
    digits[2]=time[0]/10;
    digits[3]=time[1]%10;
    digits[4]=time[1]/10;


}

void updateDisplay(){
    for(int i=1;i<=4;i++){
    digitalWrite(A, 0);
    digitalWrite(B, 0);
    digitalWrite(C, 0);
    digitalWrite(D, 0);
    digitalWrite(E, 0);
    digitalWrite(F, 0);
    digitalWrite(G, 0);
    pickDigit(i);
    pickNumber(digits[i]);
    //delayMicroseconds(200);
    delay(1);
    }
}

void tictac(){
    updateDigits();
    if(++time[0]==60){
        time[0]=0;
        if(++time[1]==60){
            time[1]=0;
            if(++time[2]==24){
                time[2]=0;
            }
        }
    }

}

void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(H, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D4, OUTPUT);
    
    digitalWrite(H, 0);

    Timer1.initialize(1000000);
    Timer1.attachInterrupt(tictac);
}

void loop()
{   
    updateDisplay();
}

void pickDigit(int x)  //Defined pickDigit (x), whose role is to open the port dx
{
    digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    digitalWrite(D4, 1);
    switch(x){
        case 1: digitalWrite(D1, 0); break;
        case 2: digitalWrite(D2, 0); break;
        case 3: digitalWrite(D3, 0); break;
        default: digitalWrite(D4, 0); break;
    }
}

void pickNumber(int x){
    switch(x){
        case 1: digitalWrite(A, 0);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 0);
                digitalWrite(E, 0);
                digitalWrite(F, 0);
                digitalWrite(G, 0);
                break;
        case 2:  
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 0);
                digitalWrite(D, 1);
                digitalWrite(E, 1);
                digitalWrite(F, 0);
                digitalWrite(G, 1);
                break;
        case 3:  
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 0);
                digitalWrite(F, 0);
                digitalWrite(G, 1);
                break;
        case 4: 
                digitalWrite(A, 0);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 0);
                digitalWrite(E, 0);
                digitalWrite(F, 1);
                digitalWrite(G, 1);
                break;
        case 5: 
                digitalWrite(A, 1);
                digitalWrite(B, 0);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 0);
                digitalWrite(F, 1);
                digitalWrite(G, 1); 
                break;
        case 6: 
                digitalWrite(A, 1);
                digitalWrite(B, 0);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 1);
                digitalWrite(F, 1);
                digitalWrite(G, 1); 
                break;
        case 7: 
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 0);
                digitalWrite(E, 0);
                digitalWrite(F, 0);
                digitalWrite(G, 0); 
                break;
        case 8:
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 1);
                digitalWrite(F, 1);
                digitalWrite(G, 1);
                break;
        case 9: 
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 0);
                digitalWrite(F, 1);
                digitalWrite(G, 1);
                break;
        case 0:
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 1);
                digitalWrite(F, 1);
                digitalWrite(G, 0);
                break;
        default:
                digitalWrite(A, 1);
                digitalWrite(B, 0);
                digitalWrite(C, 0);
                digitalWrite(D, 1);
                digitalWrite(E, 0);
                digitalWrite(F, 0);
                digitalWrite(G, 0);
                break;
    }
}
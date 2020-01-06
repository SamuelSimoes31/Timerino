#define A 5
#define B 7
#define C 11
#define D 9
#define E 8
#define F 6
#define G 12
#define H 10

#define D1 A0
#define D2 A1
#define D3 A2
#define D4 A3


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
    
    digitalWrite(A, 1);
    digitalWrite(B, 1);
    digitalWrite(C, 1);
    digitalWrite(D, 1);
    digitalWrite(E, 1);
    digitalWrite(F, 1);
    digitalWrite(G, 1);
    digitalWrite(H, 1);
    digitalWrite(D1, 0);
    digitalWrite(D2, 0);
    digitalWrite(D3, 0);
    digitalWrite(D4, 0);

    pickDigit(3);
    pickNumber(5);
}

void loop()
{
  
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
        default:
                digitalWrite(A, 1);
                digitalWrite(B, 1);
                digitalWrite(C, 1);
                digitalWrite(D, 1);
                digitalWrite(E, 1);
                digitalWrite(F, 1);
                digitalWrite(G, 0);
                break;
    }
}
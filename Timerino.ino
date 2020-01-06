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
    byte num;
    switch(x){
        case 1: num = 0b01100000; break;
        case 2: num = 011011010; break;
        case 3: num = 0b11110010; break;
        case 4: num = 0b01100110; break;
        case 5: num = 0b10110110; break;
        case 6: num = 0b10111110; break;
        case 7: num = 0b11100000; break;
        case 8: num = 0b11111110; break;
        case 9: num = 0b11110110; break;
        default: num = 11111100; break;
    }
    digitalWrite(H, num&0x01);
    digitalWrite(G, num&0x02);
    digitalWrite(F, num&0x04);
    digitalWrite(E, num&0x08);
    digitalWrite(D, num&0x10);
    digitalWrite(C, num&0x20);
    digitalWrite(B, num&0x40);
    digitalWrite(A, num&0x80);
}
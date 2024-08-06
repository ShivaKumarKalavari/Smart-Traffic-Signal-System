// IR sensors Ports
int ir1=8;
int ir2=9;

// Signal-1 LED Ports
int g1=13;
int y1=12;
int r1=11;

// Signal-2 LED Ports
int g2=3;
int y2=2;
int r2=1;

int ir_value1,ir_value2;

void setup(){
  // IR sensors setup
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);

  // LEDs setup
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(r2,OUTPUT); 
}

void loop(){
  ir_value1=digitalRead(ir1);
  ir_value2=digitalRead(ir2);
  
  if(ir_value1==1 && ir_value2==0){
    digitalWrite(r1,0);
    digitalWrite(r2,1);
    digitalWrite(g2,0);
    digitalWrite(g1,1);
    digitalWrite(y1,0);
    digitalWrite(y2,0); 
  }
  else if(ir_value2==1 && ir_value1==0){
    digitalWrite(r2,0);
    digitalWrite(r1,1);
    digitalWrite(g1,0);
    digitalWrite(g2,1);
    digitalWrite(y1,0);
    digitalWrite(y2,0); 
   }
    else {
    digitalWrite(r1,1);
    digitalWrite(g1,0);
    digitalWrite(r2,0);
    digitalWrite(g2,1);
    digitalWrite(y2,0);
    delay(500);
    digitalWrite(y2,1); 
    delay(500);
    digitalWrite(y2,0);
    delay(500);
    digitalWrite(r1,0);
    digitalWrite(g1,1);
    digitalWrite(y1,0);
    digitalWrite(r2,1);
    digitalWrite(g2,0); 
    digitalWrite(y2,0);
    delay(500);
    digitalWrite(y1,1);
    delay(500);
    digitalWrite(y1,0);
    delay(500); 
    }
}


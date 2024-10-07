// IR sensors Ports
int ir1=10;
int ir2=9;
int ir3=3;

// Signal-1 LED Ports
int g1=13;
int y1=12;
int r1=11;

// Signal-2 LED Ports
int g2=7;
int y2=6;
int r2=5;

// Signal-3 LED Ports
int g3=4;
int y3=2;
int r3=8;

int ir_value1,ir_value2, ir_value3;

void setup(){
  // IR sensors setup
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);

  // LEDs setup
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(y3,OUTPUT);
  pinMode(r3,OUTPUT); 
  
  //Initial state
  digitalWrite(y1,1);
  digitalWrite(y2,1);
  digitalWrite(y3,1);
  
}

void loop(){
  
  // Checking whether Vehicles present on side-1
  ir_value1=digitalRead(ir1);
  
  if(ir_value1==1){
    
    // Giving red to remaining sides
    digitalWrite(y2,0);
    digitalWrite(y3,0);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    
    // Giving green to side-1
    digitalWrite(y1,0);
    digitalWrite(g1,1);
    
    // Wait for 30 seconds
    delay(30000);
    
    //Making all yellow again
    digitalWrite(g1,0);
    digitalWrite(r2,0);
    digitalWrite(r3,0);
    
    digitalWrite(y1,1);
    digitalWrite(y2,1);
    digitalWrite(y3,1);
     
  }
  
  // Checking whether Vehicles present on side-2
  ir_value2=digitalRead(ir2);
  
  if(ir_value2==1){
    
    // Giving red to remaining sides
    digitalWrite(y1,0);
    digitalWrite(y3,0);
    digitalWrite(r1,1);
    digitalWrite(r3,1);
    
    // Giving green to side-2
    digitalWrite(y2,0);
    digitalWrite(g2,1);
    
    // Wait for 30 seconds
    delay(30000);
    
    //Making all yellow again
    digitalWrite(g2,0);
    digitalWrite(r1,0);
    digitalWrite(r3,0);
    
    digitalWrite(y1,1);
    digitalWrite(y2,1);
    digitalWrite(y3,1); 
    
   }
   
  // Checking whether Vehicles present on side-3
  ir_value3=digitalRead(ir3);
  
  if(ir_value3==1){
    
    // Giving red to remaining sides
    digitalWrite(y1,0);
    digitalWrite(y2,0);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    
    // Giving green to side-3
    digitalWrite(y3,0);
    digitalWrite(g3,1);
    
    // Wait for 30 seconds
    delay(30000);
    
    //Making all yellow again
    digitalWrite(g3,0);
    digitalWrite(r1,0);
    digitalWrite(r2,0);
    
    digitalWrite(y1,1);
    digitalWrite(y2,1);
    digitalWrite(y3,1);
    
  }
  
}

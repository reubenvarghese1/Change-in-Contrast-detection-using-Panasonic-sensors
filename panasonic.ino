int pan=A0;
int res;

void setup() {  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pan,INPUT);
}
                                                                                          
void loop() {
  // put your main code here, to run repeatedly:
res=analogRead(pan);

Serial.println(res);
if(res>656){
  Serial.println("Color change detected!!");
}
delay(1000);
}

int a = 3;
int b = 4;
int h;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);     // set up Serial library at 9600 bps
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    h = sqrt(pow(3,2)+pow(4,2));
    Serial.print("h = ");
    Serial.println(h);


}

void loop() {
  // put your main code here, to run repeatedly:

}

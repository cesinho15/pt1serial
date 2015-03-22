int comptar = 12; // es el numero max que contara.
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a "); //escriurem Ara comptare de 0 a (el valor que tingui Comptar
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++) // estructura for, primer escriurem l'inici del programa (int i=0)despres la condició (i <= comptar) per ultim l'increment (i++)
  {
    Serial.print(i);  //escriurem la variable i en cada moment fins que sigui igual a comptar ( variable seguit de un -)
    Serial.print("-");
  } 
}
void loop()     // we need this to be here even though its empty
{
}


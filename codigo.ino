// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  
    for(int contadorVermelho = 0; contadorVermelho < 10 ; contadorVermelho++)
  {
  PiscaVermelho();
}
  
}

  void PiscaVermelho()
    
   
{
    
digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  
digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
    
}

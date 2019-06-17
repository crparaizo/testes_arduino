int porta_rele1 = 2;
  
void setup()
{
  //Define pinos para o rele como saida
  pinMode(porta_rele1, OUTPUT); 
}
   
void loop()
{
  digitalWrite(porta_rele1, LOW);  //Liga rele 1
  delay(2000);
  digitalWrite(porta_rele1, HIGH); //Desliga rele 1
  delay(2000);
}

int cont=0;
  int botao;

void setup ()
{
  pinMode (3, INPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}
void envia (int cont)
{
 if (cont == 0)
 {
   digitalWrite(11, LOW);
   digitalWrite(9, LOW);
   digitalWrite(7, LOW);
 }
  
  if (cont == 1)
 {
   digitalWrite(11, LOW);
   digitalWrite(9, LOW);
   digitalWrite(7, HIGH);
 }
   
  if (cont == 2)
 {
   digitalWrite(11, LOW);
   digitalWrite(9, HIGH);
   digitalWrite(7, LOW);
 }
  
  if (cont == 3)
 {
   digitalWrite(11, LOW);
   digitalWrite(9, HIGH);
   digitalWrite(7, HIGH);
 }
  
  if (cont == 4)
 {
   digitalWrite(11, HIGH);
   digitalWrite(9, LOW);
   digitalWrite(7, LOW);
 }
  
  if (cont == 5)
 {
   digitalWrite(11, HIGH);
   digitalWrite(9, LOW);
   digitalWrite(7, HIGH);
 }
  
  if (cont == 6)
 {
   digitalWrite(11, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(7, LOW);
 }
  
  if (cont == 7)
 {
   digitalWrite(11, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(7, HIGH);
  }}
  
void loop()
  
{
  Serial.println(cont);
  envia(cont);
  botao = digitalRead(3);
  if (botao == HIGH) 
  {
    digitalWrite(13,HIGH);
  }
  
  else
  {
    digitalWrite(13,LOW);
    cont++;
  }
  
  delay(3000);
  
  if (cont == 8)
  {
    cont = 0;
  }}




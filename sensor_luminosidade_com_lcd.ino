const int beam = 13, sensor = A0;
int valorLuminosidade = 0;


void setup()
{
  pinMode(beam, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLuminosidade = analogRead(sensor);
  Serial.println(valorLuminosidade);
  
  if (valorLuminosidade < 100){
  	digitalWrite(beam, HIGH);
  }else{
  	digitalWrite(beam, LOW);
  }
  
  delay(1000);
}
// LED en el pin GPIO2
int ledPin = 2;
 
void setup()
{
    // configurar el  LED como salida
    pinMode(ledPin, OUTPUT);
        
    // Configurar el monitor Serial
    Serial.begin(115200);
}
 
void loop()
{
    Serial.print("Encendido");
    digitalWrite(ledPin, HIGH);
    delay(5000);
    Serial.println(" Apagado");
    digitalWrite(ledPin, LOW);
    delay(5000);
}

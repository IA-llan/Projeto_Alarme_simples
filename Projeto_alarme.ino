void setup() //Executar apenas uma vez os comandos.
{
  Serial.begin(9600); //Estabelece uma comunicacao serial.
  pinMode(13, OUTPUT); //A porta 13 irá enviar sinais.
  pinMode(A0, INPUT); //A porta A0 irá receber sinais.
  pinMode(5, OUTPUT); //A porta 5 irá enviar sinais.
}

void loop() //Estrutura de repeticao.
{
 
  int LDR = analogRead(A0); //A variável LDR irá receber o valor do sinais recebidos do fotorresistor.
  Serial.println(LDR); //O monitor serial irá imprimir o valor recebido do LDR para um melhor controle.
   delay(100); //Um delay de 100 milissegundos para cada informacao impressa no monitor serial.
  
  if(LDR <= 965) //É colocada uma condicao a variavel LDR.
  { 
   digitalWrite(5, HIGH); //A porta digital 5 é ligada.
    delay(10000); //Um tempo de 10 segundo para que o fique ligado.
     digitalWrite(5, LOW); //A porta 5 é desligada.
      
  }
  else{}
   
}

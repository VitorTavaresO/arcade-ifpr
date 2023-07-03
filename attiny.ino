#define led 3
#define botao 4
void setup() 
{
 pinMode(3,OUTPUT);
 pinMode(4,INPUT);
 digitalWrite(led,0);
}

void loop() {
    int estadoBotao = digitalRead(botao);
    if(estadoBotao == HIGH){
        digitalWrite(led,1);
    }
    else{
        digitalWrite(led,0);
    }
 }

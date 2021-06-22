# Trilateração

## Referências
* Trilateração a partir de ultrasom:
https://forum.arduino.cc/t/ultrasonic-trilateration-tdoa/393370
* Sugestão de trilateração usando o som:
https://forum.arduino.cc/t/trilateration/187220
* Artigo sobre sistema de posicionamento por ultrasom:
https://www.slideshare.net/samikusi/ultrasonic-positioning-system
* Localização usando RF beacons: https://grauonline.de/wordpress/?page_id=467
* Disertação sobre localização indor: http://utpedia.utp.edu.my/16513/1/Dissertation.pdf 

## Relatório 1
Um problema em fazer por ultrasom é que o controle fica fora do carro. O transmissor ficaria no robô e as antenas seriam receptoras. Como eu passaria para o possionamento para o arduino?

## Relatório 2
Aparentemente a dois modos para fazer a trilateração:
* Signal strength of received packet (RSSI)
* time-of-flight (ToF)

Para fazer por RSSI tem que usar um hardware que permita o RSSI.

## Hardware que possuimos
* 3xFS1000A

## Ideias
* Os tranceptores de trava para carro funcionam a uma distância razoável, será que há como fazer a trilateração com eles? Será que o preço deles são razoáveis para a nossa aplicação?
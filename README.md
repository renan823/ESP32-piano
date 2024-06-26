# Piano com ESP32
Desenvolvido por:
- Natalie Isernhagen Coelho
- Nicolas de Sousa Maia
- Renan Trofino Silva


# Materiais
- 1 x Placa ESP32 bluetooth/wifi
- 1 x Protoboard 830 pinos
- 7 x Botões (Push buttons)
- Fios
- Biblioteca para Bluetooth (https://github.com/T-vK/ESP32-BLE-Keyboard)

# Funcionamento
O projeto conta com um piano simples, constituido por 7 botões.
Cada botão representa, respectivamente, as notas dó, ré, mi, fá, sol, lá e si.
Ao iniciar, o programa procura por uma conexão bluetooth (utilizando a biblioteca BLE-Keyboard). </br>
Se um dispositivo se conectar, o programa permite o "clique" nas notas, enviando-as via bluetooth para o dispositivo conectado.
Quando executado um simulador de piano (no dispositivo conectado), as notas serão tocadas.
Nesse projeto, o simulador usado está disponível neste link https://www.onlinepianist.com/virtual-piano

# Vídeo

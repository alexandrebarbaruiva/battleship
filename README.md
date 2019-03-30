# Battleship

Cada jogador deve dispor de uma área de 10x10 onde ele vai posicionar 5 navios de tamanhos diferentes: um porta-aviões (comprimento 5), um encouraçado (comprimento 4), um submarino (comprimento 3), um destroyer (comprimento 2) e um barco de patrulha (comprimento 1). Um jogador nunca deve saber a posição dos navios do oponente. Os navios de um mesmo jogador não podem se cruzar e devem estar dentro das fronteiras da sua área disponível.

Depois que todas as peças estão posicionadas, os jogadores se alternam em turnos para lançar bombas sobre o outro oponente especificando qual posição ele deseja atacar. Se algum dos navios do jogador que está sendo atacado estiver na posição atacada, considera-se que o navio foi atingido. O ataque falha se o atacante lançar uma bomba em um local onde não existe nenhum navio do oponente.

Caso todos as posições de um navio for atingida, o jogador atacado deve informar o oponente qual dos seus navios afundou. O jogo continua até que um jogador afunde todos os navios de seu oponente; este jogador é então considerado vencedor.

Você deve desenvolver um programa que jogue uma partida de batalha naval entre dois oponentes, sendo um a máquina, o outro a entidade que deseja jogar. Você precisa:

Definir uma maneira de indicar o estado inicial dos navios dos jogadores;
Exibir todos os movimentos dos jogadores, informando se os ataques foram bem sucedidos ou não;
Informar quando um navio é atingido e quando ele é afundado;
Exibir ao final do jogo um mapa final do posicionamento final dos navios dos jogadores.

## Entregas

### Entrega 1 (MVP)

- Mensagem de vitória e de derrota
- Mapa 2x2
- Apenas 1 tipo de navio (1x1)
- Dois navios por jogador
- Inimigo fácil (complexidade baixa)

### Entrega 2 (Product ready)

- Mapa 10x10
- 5 tipos de navios, 1 de cada tipo
- Inimigo mais esperto
- (OPCIONAL) Salvamento de estado do jogo

## Tipos de navios

| Ship       | Size | Description                                   |
|------------|------|-----------------------------------------------|
| Carrier    |  5x1 | A Behemoth of a ship, can turn tides in a war |
| Battleship |  4x1 | Main ship for offense and defense             |
| Submarine  |  3x1 | Ideal for sneak attacks and surveillance      |
| Destroyer  |  2x1 | Can do some damage in most situations         |
| Boat       | 1x1  | It might tickle you                           |

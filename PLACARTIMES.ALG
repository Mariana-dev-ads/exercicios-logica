algoritmo "Placartimes"
var
   G1 , G2, Ng : Inteiro
inicio
      Escreval("------------------------")
      Escreval("--Futebol Predro City-- ")
      Escreval("------------------------")
      Escreval("Quantos gols do time 1 ?")
      Leia(G1)
      Escreval("Quantos gols do time 2 ?")
      Leia(G2)
      Escreval("Diferença do placar :" , G1, " X ", G2)
      Ng<- G1+G2

      Se(Ng<=3 )  Entao
               Escreval("Partida normal")
      Fimse
      se(Ng<=0)Entao
              Escreval("Empate")
      Fimse
      Se(Ng>= 5) Entao
              Escreval("Goleada")
      Fimse
fimalgoritmo
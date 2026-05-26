Algoritmo "COMBUSTIVEL-EstruturaEnquanto"
// Dentro da estrutura Enquanto coloquei a estrutura caso

Var
   Codigo,Alcool,Diesel,Gasolina:Inteiro

Inicio

   Alcool <-0
   Diesel <-0
   Gasolina <-0


   Escreval("Informe um codigo(1,2,3)ou 4 para parar: ")
   Leia(Codigo)
   
   Enquanto Codigo <> 4   Faca

      Escolha Codigo
//Ficar atento quando for fazer caso com numero nao colocar JUNTO EX CASO2
         Caso 1
         Alcool<- Alcool + 1
         Caso 2
         Diesel<- Diesel + 1
         Caso 3
         Gasolina<- Gasolina +1
      fimescolha

      Escreval("Informe um codigo(1,2,3)ou 4 para parar: ")
      Leia(Codigo)
   Fimenquanto

   Escreval("Muito Obrigada.")
   Escreval("Alcool: " , Alcool)
   Escreval("Diesel: " , Diesel)
   Escreval("Gasolina: " , Gasolina)

Fimalgoritmo
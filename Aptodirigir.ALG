algoritmo "Aptodirigir?"
var
   pl: caractere
   Ano,Nasc,Idade: inteiro

inicio
      Pl<- "Departamento de transito Pedro Leopoldo "
      Escreval(Pl)
      Escreval("Ano atual: " )
      Leia (Ano )
      Escreva("Ano de nascimento : " )
      Leia (Nasc)
      
     //  Linha adicionada para calcular a idade
   Idade <- Ano - Nasc
   Escreval("Sua idade é: ", Idade, " anos.")

   Se (Idade >= 18) entao
      Escreval("Você está apto a dirigir!")
   Senao
      Escreval("Você NÃO está apto a dirigir!")
   fimse
fimalgoritmo

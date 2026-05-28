algoritmo "ContagemInteligente"
var
   Valor, Cont:Inteiro

inicio
Cont<-0

     Escreval("Quer contar até quanto ? " )
     Leia(Valor)
     Enquanto Cont <= Valor faça
           Escreval(Cont)
           Cont <- cont + 1
     FimEnquanto
     Escreval("---------------------")
                Enquanto cont >= 0 faça
                     Escreval(Cont)
                     Cont <- cont - 1
                FimEnquanto
     Escreva(" Terminei de contar " )
fimalgoritmo
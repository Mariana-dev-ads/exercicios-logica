Algoritmo "Pares-consecutivos"
//
//

Var
   Num,soma: Inteiro


Inicio
   Escreval
   Escreval ("Digite um numero inteiro : ")
   Leia(Num )
   Se num % 2 <> 0 entao
      Num :=  Num+1
   Fimse
   Enquanto num<>0 Faca
      Soma:=(5 * num)+20
      Escreval(" Soma: " , soma)
      Escreval(" Digite um numero: ")
      Leia(Num)
      Escreval
      Se num %2 <>0 entao
         Num:= Num + 1
      Fimse

      Soma:=0
   Fimenquanto

Fimalgoritmo
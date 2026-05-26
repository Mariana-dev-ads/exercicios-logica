algoritmo "MediaAluno"
var
   N1,N2,M: Real


inicio
      Escreval("_____________________")
      Escreval("Escola Pedro Leopoldo")
      Escreval("_____________________")
      Escreval("Qual a primeira nota: ")
      Leia(N1)
      Escreval("Qual a segunda nota? ")
      Leia(N2)
      M<- (N1+N2) /2
      Escreval("A media do aluno foi : " ,M:4:2)
      Se (N1 >=9) e (N2 <=10)entao
          Escreval("Aproveitamento: A ")
Fimse
          Se(N1 >=8)e (N2 <=9)entao
                Escreval("Aproveitamento: B")
Fimse
                Se (N1>=7) e (N2<=8)entao
                   Escreval("Aproveitamento: C")
Fimse
                   Se(N1>=6) e (N2<=7)entao
                      Escreval("Aproveitamento: D" )
Fimse
                      Se(N1>=5) e (N2<=6)entao
                         Escreval("Aproveitamento: E")
Fimse
                         se(N1<=5) e (N2<=5)entao
                            Escreval("Aluno Reprovado. Aproveitamento: F")
Fimse
fimalgoritmo
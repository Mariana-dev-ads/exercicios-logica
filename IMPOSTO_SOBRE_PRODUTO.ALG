algoritmo "Emprestimo,juros de cada parcela"
var

   Emprestimo, juros,nparc, jfinal, parcela: real
   data,agradecimento: caractere



inicio
      Escreva("Qual o valor que deseja? ")
      Leia(Emprestimo)
      Escreva(" Seria em quantas parcelas? ")
      Leia(nparc)
      juros<-(Emprestimo * 20 /100)
      jfinal<- (Emprestimo+juros)
      Escreval("juros do valor solicitado será de R$:" ,juros,)
      Escreval("o valor total do emprestímo é R$: ",jfinal)
      parcela<- jfinal/nparc
      Escreval(" Cada parcela será R$:", parcela )
      Escreval("Qual a data que o sr deseja de pagamento?")
      Leia(data)
      Escreval(" o seu vencimento será todo dia  " , data , " de cada mês")
      Escreval(" Agradecemos o contato.")
      Escreva(agradecimento)

      
      


      


fimalgoritmo
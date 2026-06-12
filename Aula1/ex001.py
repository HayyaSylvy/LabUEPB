media = float(input("Insira sua média: "))
freq = float(input("Insia sua porcentagem de presença: "))
renda = int(input("Insira a renda da sua família: "))
if media > 10 or media < 0:
    print("Média invalida")
    exit(0)  
elif freq > 100 or freq < 0:
    print("Frequência invalida")   
    exit(0)
elif freq > 100 or freq < 0:
    print("Frequência invalida")   
    exit(0)
else:
    if media >= 8:
        mediavaga = 1    
        medialista = 0
    elif media == 7:
        medialista = 1
        mediavaga = 0  
    else:
        medialista = 0
        mediavaga = 0
    if freq >= 75:
        freqvalida = 1
    else:
        freqvalida = 0    
    if renda <= 2500:
        rendavalida = 1    
    elif renda < 0:
        print("Renda invalida")
        exit(0)    
    else:
        rendavalida = 0
    if rendavalida==1 and freqvalida==1 and mediavaga==1:
        print("Você tem direito a bolsa :D")
    elif rendavalida==1 and freqvalida==1 and medialista==1:
        print("Você tem direito a lista de espera :D")
    else:
        print("Você não tem direito a nada.")
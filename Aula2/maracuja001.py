# Crie um programa em Python que registra a pontuação de jogadores que estão participando de uma competição ao solicitar ao usuário a quantidade de jogadores e, em listas, armanezar o nome e a pontuação de cada jogador.
i = 1
listanome = []
listapontos = []
ciclos = 1

while i==1:
    nomeplayers = str(input("Digite o nome do jogador: "))
    listanome.append(nomeplayers)
    pontplayers = int(input("Digite a pontuação desse jogador: "))    
    listapontos.append(pontplayers)
    # parte dois :P
    # a soma total dos pontos, a média dos pontos, a maior pontuação e a menor pontuação
    print(listanome)
    print(listapontos)
    loopinho = int(input("Digite 0 para adicionar outro jogador ou 1 para encerrar o programa: "))
    if loopinho == 1:
        somalista = sum(listapontos)
        print("A soma dos pontos de todos os jogadores foi", somalista)
        medialista = somalista / ciclos
        print("A media dos pontos de todos os jogadores foi", medialista)
        marxlista = max(listapontos)
        print("A maior pontuação foi", marxlista)
        minlista = min(listapontos)
        print("A menor pontuação foi", minlista)
        i = 0
    else:
        ciclos += 1
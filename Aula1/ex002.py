ex = 1
while ex==1:
    nproduto = str(input("Qual o nome desse produto: "))
    qproduto = int(input("Quantos desse produto o estoque tem: "))
    qminproduto = int(input("Qual a quantidade mínima desse produto: "))
    if qproduto == 0:
        print("Produto esgotado.")
        ex=0
    elif qproduto < qminproduto:
        print("Abaixo do estoque. Reposição necessária.")
        ex=0
    elif qproduto >= qminproduto:
        print("Estoque adequado.")
        ex=0
    controle = str(input("Digite S para executar novamente para outro produto e N para sair. "))
    if controle == "S" or controle == "s":
        print("Executando novamente.")
        n = 1
        n = n + 1
        ex = 1
    elif controle == "N" or "n":
        ex = 0
        print("O programa foi executado", n, "vezes")
        exit(0)
    else:
        print("Digite novamente.")
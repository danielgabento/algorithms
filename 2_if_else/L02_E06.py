'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6 - Faça um algoritmo que peça uma nota N1 e, em seguida, uma nota N2. O algoritmo deve
calcular a média das duas notas e apresentar a mensagem “Aprovado”, caso o resultado seja
maior ou igual a 6; ou “Reprovado”, caso o resultado seja inferior a 6.
'''

nota_1 = int(input("Digite a nota N1: "))
nota_2 = int(input("Digite a nota N2: "))
media = ((nota_1 + nota_2) / 2)

if (media >= 6):
    print("Aprovado")
else:
    print("Reprovado")





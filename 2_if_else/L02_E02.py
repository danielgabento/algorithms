'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2 - Faça um algoritmo que peça o salário de um funcionário. Se o salário for menor do que R$ 1.045, 
o algoritmo deve apresentar a mensagem “você ganha menos do que um salário mínimo”. Do contrário, 
o algoritmo deve apresentar a mensagem “você ganha pelo menos um salário mínimo”.
'''

S = int(input("Digite seu salário: "))

if (S < 1045):
    print("Você ganha menos que um salário mínimo")
else:
    print("Você ganha pelo menos um salário mínimo")



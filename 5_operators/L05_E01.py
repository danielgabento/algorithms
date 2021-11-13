'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1. Faça um programa que peça para o usuário digitar um número entre 1 e 6 (inclusive). Se o
valor digitado estiver no intervalo, apresentar a mensagem “Valor digitado com sucesso”. Do
contrário, apresentar a mensagem “Valor fora do intervalo permitido”.
'''

num = int(input("Digite um número entre 1 e 6: "))


if ((num >= 1) & (num <= 6)):
    print("Valor digitado com sucesso")
else:
    print("Valor fora do intervalo")  







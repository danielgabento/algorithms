'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2. Faça um programa que peça para o usuário digitar um número inferior a 1 ou superior a 6. Se
o valor digitado estiver correto, apresentar a mensagem “Valor digitado com sucesso”. Do
contrário, apresentar a mensagem “Valor não pode estar entre 1 e 6”.
'''

num = int(input("Digite um número inferior a 1 ou superior a 6: "))


if ((num < 1) or (num > 6)):
    print("Valor digitado com sucesso")
else:
    print("Valor não pode estar entre 1 e 6")  







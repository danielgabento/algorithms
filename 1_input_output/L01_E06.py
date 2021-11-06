'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6 - Faça um algoritmo que peça o nome do usuário, depois a idade do usuário e, em seguida,  
digite a mensagem: “Legal, <nome do usuário>! Você tem <idade> anos!”.
'''

nome = input("Digite seu nome: ")
idade = input("Digite sua idade: ")
print("Legal, {}! Você têm {} anos!".format(nome, idade))
# print("Legal, ", nome,"! Você têm ", idade," anos!")

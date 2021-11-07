'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

5 - Faça um algoritmo que peça uma senha (apenas numérica). 
Em seguida, o algoritmo deve pedir a  confirmação da senha. Se a senha 
repetida for igual à original, apresentar a mensagem “Senha criada com sucesso”. 
Do contrário, apresentar a mensagem “senha não confere”.
'''

senha_1 = int(input("Digite uma senha numérica: "))
senha_2 = int(input("Digite novamente a senha: "))

if (senha_1 == senha_2):
    print("Senha criada com sucesso")
else:
    print("Senha não confere")





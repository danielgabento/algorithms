'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

7 - Faça um algoritmo que peça o nome de um usuário. 
Em seguida, o algoritmo deve pedir o gênero do usuário 
(‘f’ para feminino e ‘m’ para masculino). Se o usuário for do sexo feminino, 
apresentar a mensagem “Olá, senhora <nome>“. Do contrário, apresentar a mensagem 
“Olá, senhor <nome>“. Observação: faça de conta que o usuário sempre digitará ‘f’ ou ‘m’. 
'''

nome = str(input("Digite seu nome: "))
genero = str(input("Digite seu gênero (f/m): "))

if (genero == "f"):
    print("Olá senhora {}".format(nome))
    # print("Olá senhora ", nome)
else:
    print("Olá senhor {}".format(nome))
    # print("Olá senhor ", nome)





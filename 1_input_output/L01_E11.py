'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

11 - Faça um algoritmo que peça uma temperatura em graus farenheits e apresente seu respectivo valor em celsius.  
O cálculo de conversão é: C= 5*(F-32)/9.
'''

temp_F = int(input("Digite uma temperatura em farenheits: "))
temp_C = 5 * ((temp_F - 32) / 9)
print("A temperatura em  celsius é de: {}".format(temp_C))
# print("A temperatura em celsius é de: ", temp_C)

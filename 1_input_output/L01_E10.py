'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

10 - Faça um algoritmo que peça uma temperatura em graus celsius e apresente seu  
respectivo valor em farenheits. O cálculo de conversão é: F= (9*C/5) + 32.
'''

temp_C = int(input("Digite uma temperatura em celsius: "))
temp_F = ((9 * temp_C) / 5) + 32
print("A temperatura em  farenheits é de: {}".format(temp_F))
# print("A temperatura em  farenheits é de: ", temp_F)

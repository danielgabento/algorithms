'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

7. Faça um programa que apresente o menu:
1- Conversão de temperatura
2-Conversão de distância
Se o usuário escolher a opção 1, apresentar o menu:
1-Converter Celsius para Farenheit
2- Converter Farenheit para Celsius
3-Converter Celsius para Kelvin
O programa deverá, então, pedir uma temperatura, realizar a conversão escolhida e
apresentar a mensagem com o valor convertido.
Se o usuário escolher a opção 2 do primeiro menu, conversão da distância, apresentar o menu:
1-Converter km para milhas
2-Converter milhas para km
Então, o programa deverá realizar a respectiva conversão e apresentar a mensagem com
o valor convertido.
Os cálculos para conversão são:
• Farenheit = (9*Celsius/5) + 32
• Celsius = 5*(Farenheit-32)/9
• Kelvin = Celsius + 273
• Milha = km * 0.62137
• Km = milha / 0.62137
'''


print("\n||||| CALCULADORA DE CONVERSÃO DE MEDIDAS |||||\n\n")

print("Escolha uma opção\n")
print("1 - Conversão de temperatura")
print("2 - Conversão de distância\n")

MENU_1 = int(input(">: "))

if(MENU_1 == 1):
    print("1 - Converter Celsius para Farenheit")
    print("2 - Converter Farenheit para Celsius")
    print("3 - Converter Celsius para Kelvin")
    MENU_2 = int(input(">: "))

    if(MENU_2 == 1):
        TEMP_C = float(input("Digite uma temperatura em Celsius: "))
        TEMP_F = ((9 * (TEMP_C / 5)) + 32)
        print("A temperatura em Farenheit é de {}".format(TEMP_F))
    elif(MENU_2 == 2):
        TEMP_F = float(input("Digite uma temperatura em Farenheit: "))
        TEMP_C = ((5 * (TEMP_F - 32)) / 9)
        print("A temperatura em Celsius é de {}".format(TEMP_C))
    elif(MENU_2 == 3):
        TEMP_C = float(input("Digite uma temperatura em Celsius: "))
        TEMP_K = (TEMP_C + 273)
        print("A temperatura em Kelvin é de {}".format(TEMP_K))
    else:
        print("Opção informada não existe!")
elif(MENU_1 == 2):
    print("1 - Converter km para milhas")
    print("2 - Converter milhas para km")
    MENU_3 = int(input(">: "))   

    if(MENU_3 == 1):
        KM = float(input("Digite uma distância em km: "))
        MILHAS = (KM * 0.62137)
        print("A distância em milhas é de {}".format(MILHAS))
    elif(MENU_3 == 2):
        MILHAS = float(input("Digite uma distância em milhas: "))
        KM = (MILHAS / 0.62137)
        print("A distância em km é de {}".format(KM))
    else:
        print("Opção informada não existe!")
else:
    print("Opção informada não existe!")






'''
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3. Faça um algoritmo que peça a temperatura da água de um recipiente, em Célsius. De
acordo com a temperatura, o algoritmo deve apresentar a seguinte mensagem:
a. Se for superior a 100 ºC: “A água está em estado de vapor”;
b. Se for superior a 0 ºC: “A água está em estado líquido”;
c. Se não for nenhuma das anteriores: "A água está em estado sólido"
'''

temp = float(input("Informe uma temperatura em Celsius: "))

if (temp > 100):
    print("A água está em estado de vapor")
elif ((temp > 0) & (temp <= 100)):
    print("A água está em estado líquido")    
else:
    print("A água está em estado sólido") 





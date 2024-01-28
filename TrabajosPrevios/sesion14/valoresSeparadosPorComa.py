import pandas as pd
try:
    # Se intenta acceder a un archivo separado por coma
    titanic = pd.read_csv("data/titanic.csv")
    # Se intenta pasar el arhivo titanic a estilo excel
    titanic.to_excel("titanic.xlsx", sheet_name="passengers", index=False)

    print(titanic)  # Se intenta imprimir el archivo csv

except FileNotFoundError:
    print("Archivo no encontrado")

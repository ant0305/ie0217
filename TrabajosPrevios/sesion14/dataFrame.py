import pandas as pd  # Se importa la libreria pandas
# Se crea un dataframe con datos ejemplo
df = pd.DataFrame(
    {
        "Name": [
            "Allen, Mr. William Henry",
            "Braund, Mr. Owen Harris", "Bonnell, Miss. Elizabeth", ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"],
        "Music": ["rock", "metal", None],
    }
)
print(df)  # Se imprime el dataframe para ver el contenido en la terminal
print("")

print("Otro codigo:")
print(df["Age"])  # Se imprime solo la edad como una serie

print(df["Age"].max())  # Se imprime la edad mas alta
# Metodo describe()
print(df.describe())  # Imprime la informacion general de los datos del archivo

print(df.head(2))  # Se acceden a los primeros del dataframe

print(df.dtypes)  # Imprime los tipos de datos del dataframe

print(df.info())  # Imprime la informacion general sobre el archivo

print(df[["Age", "Sex"]])  # Entrega un dataframe formado por age,sex

print("%%%%%%%%%%%%%%%%")

var = df[df["Sex"].isin(["male"])]
# Imprime los primeros dos datos que tengan (male) en la fila de sexo
print(var.head(2))

print("%%%%%%%%%%%%%%%%")

var2 = df[df["Music"].notna()]
# Imprime los datos que tengan musica favorita
print(var2.head())

print("%%%%%%%%%%%%%%%%")

var3 = df.loc[df["Age"] > 35, "Name"]
# Imprime el nombre de las personas mayores a 35
print(var3.head())

print("%%%%%%%%%%%%%%%%")

# Imprime las primeras 2 filas y la edad y el sexo
print(df.iloc[0:2, 1:3])

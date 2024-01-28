import pandas as pd

df = pd.DataFrame(
    {
        "Titulo": [
            "Cien años de soledad",
            "Harry Potter",
            "1984",
            "El Gran Gatsby",
            "To Kill a Mockingbird",
        ],
        "Autor": [
            "Gabriel Garcia Marquez",
            "J.K. Rowling",
            "George Orwell",
            "F. Scott Fitzgerald",
            "Harper Lee",
        ],
        "Genero": [
            "Ficcion",
            "Fantasia",
            "Ficcion",
            "Ficcion",
            "Ficcion",
        ],
        "Fecha de publicacion": [1967, 1997, 1949, 1925, 1960],
        "Precio": [15.99, 19.99, 12.49, 14.95, 13.75],
    }
)

df["Ganga"] = df["Precio"] * 0.50
# Agrega una nueva columna llamada ganga
print(df.head())

print("%%%%%%%%%%%%%%%%")

# Se le cambia el nombre a una columna
df = df.rename(
    columns={
        "Ganga": "Oferta"
    }
)
print(df.head())

print("%%%%%%%%%%%%%%%%")

# Se saca el promedio del precio
print(df["Precio"].mean())

# Se saca la mediana del precio
print(df["Precio"].median())

print("%%%%%%%%%%%%%%%%")
var = df.agg(
    {
        "Precio": ["min", "max"]
    }
)
# Imprime el precio maximo y el precio minimo
print(var)

print("%%%%%%%%%%%%%%%%")

var2 = df[["Genero", "Precio"]].groupby("Genero").min()
# Se imprime el libro mas barato por genero
print(var2)

print("%%%%%%%%%%%%%%%%")

# Imprime la cantidad de autores que hay
print(df["Autor"].value_counts)

# Se ordenan los precios de mayor a menor
var3 = df.sort_values(by="Precio").head()
print(var3["Precio"])

print("%%%%%%%%%%%%%%%%")

var4 = df.pivot(columns="Genero", values="Precio")
"""
Se divide genero en columnas y se imprime el precio
que posee cada elemento.
"""
print(var4)

print("%%%%%%%%%%%%%%%%")

var5 = df.pivot_table(columns="Genero", values="Precio", aggfunc="mean")
"""
Se divide genero en columnas y se imprime la
media de los elementos
"""
print(var5)

print("%%%%%%%%%%%%%%%%")

var6 = var4.melt(id_vars="Fantasia")
"""
Se hace la separacion del pivote respecto a
fantasia
"""
print(var6)

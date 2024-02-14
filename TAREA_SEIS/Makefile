# Definir el comando de Python (ajustar si es necesario, por ejemplo, python3)
PYTHON_CMD = python

# Ruta al script principal
MAIN_SCRIPT = src/cars_analysis/main.py

# Ejecutar el analisis
all: run

# Regla para ejecutar el analisis
run:
	@echo "Ejecutando el analisis"
	cd src/cars_analysis && $(PYTHON_CMD) main.py

# Regla para limpiar archivos generados, como .pyc u otros temporales
clean:
	@echo "Limpiando archivos temporales..."
	@find . -type f -name '*.pyc' -delete
	@echo "Limpieza completa."

.PHONY: all run clean

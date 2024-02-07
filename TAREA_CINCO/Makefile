# Directorio de los archivos fuente
SRCDIR = src

# Comando para ejecutar Python
PYTHON = python

# Objetivo predeterminado
default: run

run:
	@echo "Ejecutando el script"
	cd $(SRCDIR) && $(PYTHON) main.py

clean:
	@echo "Limpiando archivos temporales..."
	cd $(SRCDIR) && find . -name '*.pyc' -exec rm -f {} +
	cd $(SRCDIR) && find . -name '__pycache__' -exec rm -rf {} +

.PHONY: run clean default

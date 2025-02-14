import matplotlib.pyplot as plt
import numpy as np

# Crear una figura y ejes
fig, ax = plt.subplots()

# Dibujar la cabeza del panda
head = plt.Circle((0, 0), 1, color='black', fill=False, linewidth=3)
ear_left = plt.Circle((-0.7, 1), 0.3, color='black', fill=True)
ear_right = plt.Circle((0.7, 1), 0.3, color='black', fill=True)
eye_left = plt.Circle((-0.4, 0.3), 0.2, color='black', fill=True)
eye_right = plt.Circle((0.4, 0.3), 0.2, color='black', fill=True)
nose = plt.Circle((0, -0.2), 0.1, color='black', fill=True)

# Agregar las formas al gráfico
ax.add_patch(head)
ax.add_patch(ear_left)
ax.add_patch(ear_right)
ax.add_patch(eye_left)
ax.add_patch(eye_right)
ax.add_patch(nose)

# Configuración de los ejes
ax.set_xlim(-1.5, 1.5)
ax.set_ylim(-1.5, 1.5)
ax.set_aspect(1)
ax.axis("off")  # Ocultar los ejes

# Mostrar el panda
plt.show()

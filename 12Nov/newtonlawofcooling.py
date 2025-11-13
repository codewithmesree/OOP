import numpy as np
import matplotlib.pyplot as plt

# Parameters
T_ambient = 20      # ambient temperature (°C)
T_initial = 37      # normal body temperature (°C)
k = 0.1             # cooling constant (per hour)
hours = 12          # simulate for 12 hours
dt = 0.1            # time step (hours)

# Time array
t = np.arange(0, hours + dt, dt)

# Temperature array
T = T_ambient + (T_initial - T_ambient) * np.exp(-k * t)

# Plot the cooling curve
plt.figure(figsize=(10,6))
plt.plot(t, T, label="Body Temperature", color='red', linewidth=2)
plt.axhline(y=T_ambient, color='blue', linestyle='--', label="Ambient Temperature")
plt.title("Newton's Law of Cooling - Forensic Simulation")
plt.xlabel("Time since death (hours)")
plt.ylabel("Body Temperature (°C)")
plt.legend()
plt.grid(True)
plt.show()

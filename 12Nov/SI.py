import numpy as np
import matplotlib.pyplot as plt

# Parameters
N = 1000        # total population
I0 = 1          # initial infected
S0 = N - I0     # initial susceptible
beta = 0.3      # infection rate
days = 100      # total simulation time
dt = 0.1        # time step

# Time array
t = np.arange(0, days, dt)

# Initialize arrays
S = np.zeros(len(t))
I = np.zeros(len(t))

# Initial conditions
S[0] = S0
I[0] = I0

# Euler's method for numerical integration
for i in range(1, len(t)):
    dI = beta * I[i-1] * S[i-1] / N
    I[i] = I[i-1] + dI * dt
    S[i] = S[i-1] - dI * dt

# Plot results
plt.figure(figsize=(10, 6))
plt.plot(t, S, label='Susceptible', color='blue')
plt.plot(t, I, label='Infected', color='red')
plt.title('SI Epidemic Model Simulation')
plt.xlabel('Time (days)')
plt.ylabel('Number of People')
plt.legend()
plt.grid(True)
plt.show()

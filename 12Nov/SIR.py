import numpy as np
import matplotlib.pyplot as plt

# Parameters
N = 1000         # total population
I0 = 1           # initial infected
R0 = 0           # initial recovered
S0 = N - I0 - R0 # initial susceptible
beta = 0.3       # infection rate
gamma = 0.1      # recovery rate
days = 160
dt = 0.1

# Time array
t = np.arange(0, days, dt)

# Arrays to store values
S = np.zeros(len(t))
I = np.zeros(len(t))
R = np.zeros(len(t))

# Initial values
S[0] = S0
I[0] = I0
R[0] = R0

# Euler's Method for numerical solution
for i in range(1, len(t)):
    dS = -beta * S[i-1] * I[i-1] / N
    dI = beta * S[i-1] * I[i-1] / N - gamma * I[i-1]
    dR = gamma * I[i-1]

    S[i] = S[i-1] + dS * dt
    I[i] = I[i-1] + dI * dt
    R[i] = R[i-1] + dR * dt

# Plotting
plt.figure(figsize=(10,6))
plt.plot(t, S, label='Susceptible', color='blue')
plt.plot(t, I, label='Infected', color='red')
plt.plot(t, R, label='Recovered', color='green')
plt.title('SIR Model Simulation')
plt.xlabel('Time (days)')
plt.ylabel('Number of People')
plt.legend()
plt.grid(True)
plt.show()
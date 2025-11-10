import random
import matplotlib.pyplot as plt

# Ask user for number of random points
num_points = int(input("Enter number of random points: "))

inside_circle = 0
x_inside, y_inside = [], []
x_outside, y_outside = [], []

# Generate random points
for _ in range(num_points):
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)
    distance = x**2 + y**2

    if distance <= 1:  # Point is inside the circle
        inside_circle += 1
        x_inside.append(x)
        y_inside.append(y)
    else:  # Point is outside the circle
        x_outside.append(x)
        y_outside.append(y)

# Calculate estimated value of pi
pi_estimate = 4 * inside_circle / num_points
print(f"\nEstimated value of π: {pi_estimate}")

# Plot points
plt.figure(figsize=(6,6))
plt.scatter(x_inside, y_inside, color='pink', s=5, label='Inside Circle')
plt.scatter(x_outside, y_outside, color='lavender', s=5, label='Outside Circle')

# Draw circle boundary for reference
circle = plt.Circle((0, 0), 1, color='blue', fill=False, linewidth=2, label='Unit Circle')
plt.gca().add_patch(circle)

plt.title(f"Monte Carlo Simulation (Estimated π = {pi_estimate:.5f})")
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.legend()
plt.axis("equal")
plt.show()

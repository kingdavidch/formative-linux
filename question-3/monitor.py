import matplotlib.pyplot as plt
import systemstats
import time

fig, (ax_cpu, ax_mem, ax_net) = plt.subplots(3, 1)
xs = []
cpu_ys, mem_ys, net_ys = [], [], []

def animate(i):
    cpu, mem, net = systemstats.get_stats()
    xs.append(time.time())
    cpu_ys.append(cpu)
    # ... Update plots

ani = animation.FuncAnimation(fig, animate, interval=2000)
plt.show()

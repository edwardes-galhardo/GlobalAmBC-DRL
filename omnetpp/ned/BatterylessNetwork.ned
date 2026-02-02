[General]
network = globalambc.network.BatterylessNetwork
sim-time-limit = 300s

# Número de nós
*.numNodes = 50

# Configuração básica de mobilidade (estático)
*.node[*].mobility.typename = "StationaryMobility"

# Aplicação simples de tráfego
*.node[*].numApps = 1
*.node[*].app[0].typename = "UdpBasicApp"
*.node[*].app[0].destAddresses = "node[0]"
*.node[*].app[0].destPort = 5000
*.node[*].app[0].messageLength = 64B
*.node[*].app[0].sendInterval = exponential(1s)

# Modelo energético simplificado (sem controle adaptativo)
*.node[*].wlan[0].radio.transmitter.power = 1mW

# Desativa controle DRL
*.globalController.enabled = false

# GlobalAmBC-DRL

> A Deep Reinforcement Learning framework for adaptive control in dense batteryless Internet of Things (IoT) networks using Ambient Backscatter Communication (AmBC).

---
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()
[![Research](https://img.shields.io/badge/Research-UFG-blue.svg)]()
[![OMNeT++](https://img.shields.io/badge/Simulator-OMNeT++-orange.svg)]()
[![Python](https://img.shields.io/badge/Python-3.x-blue.svg)]()

## Overview

GlobalAmBC-DRL is an open-source research framework designed to investigate adaptive control strategies for dense batteryless IoT networks using Ambient Backscatter Communication (AmBC).

The framework integrates OMNeT++ network simulations with a Deep Reinforcement Learning (DRL) agent capable of dynamically adjusting the reflection coefficient of batteryless devices according to global network conditions.

The objective is to improve:

- Throughput
- Energy Efficiency
- Network Stability
- Scalability in Dense IoT Scenarios

This repository accompanies the research developed during the PhD project at the Federal University of Goiás (UFG), Brazil.

The framework implements the GlobalAmBC-DRL Control Module, a centralized decision-making architecture that continuously adapts the reflection coefficient of batteryless IoT devices based on aggregated network state information.

---

## System Architecture

The GlobalAmBC-DRL framework integrates network simulation, global state aggregation, and Deep Reinforcement Learning (DDPG) to enable adaptive control in dense batteryless IoT networks based on Ambient Backscatter Communication (AmBC).

<p align="center">
  <img src="docs/FiguraPrincipal4" alt="GlobalAmBC-DRL Architecture" width="900"/>
</p>

<p align="center">
<b>Figure 1.</b> Overall architecture of the GlobalAmBC-DRL framework.
</p>

The framework operates as a closed-loop control system composed of four main components:

- **OMNeT++ Simulation Environment:** simulates dense batteryless IoT networks.
- **Global State Aggregator:** collects network-wide metrics.
- **DDPG Agent:** computes the optimal reflection coefficient.
- **Adaptive Reflection Controller:** applies the selected action to the simulated network.

---

## Key Features

- Adaptive reflection coefficient optimization
- Deep Reinforcement Learning (DDPG)
- OMNeT++ simulation environment
- Batteryless IoT networks
- Ambient Backscatter Communication
- Modular architecture
- Reproducible scientific experiments

---


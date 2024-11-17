# Lithium Battery Balancer

## Project Overview

The **Lithium Battery Balancer** project aims to extend the lifespan and improve the performance of lithium battery packs by ensuring the voltage and state of charge (SoC) is balanced across all cells. This system employs LM358N operational amplifiers for voltage and current monitoring, and 10A relays for efficient power transfer between high-capacity and low-capacity cells. The project ensures safe charging/discharging, preventing overcharging, over-discharging, and reducing the risk of performance degradation.

## Features

- **State of Charge (SoC) Monitoring:**  
  Uses LM358N operational amplifiers to monitor the voltage difference and state of charge across individual battery cells.

- **Power Transfer:**  
  10A relays are used to transfer power from higher-capacity cells to lower-capacity cells, maintaining balance within the battery pack.

- **Battery Protection:**  
  Prevents overcharging and over-discharging of cells, helping to extend the overall lifespan of the battery pack.

- **Efficient Energy Balancing:**  
  Ensures even energy distribution across cells to optimize battery performance.

## Components Used

- **Arduino Nano:**  
  Controls the switching and logic for the power balancing process.

- **LM358N Operational Amplifiers:**  
  Monitors voltage and current levels of individual cells, enabling real-time SoC tracking.

- **10A Relays:**  
  Manages the power transfer between battery cells to balance the charge.

- **Lithium-ion Battery Pack:**  
  The battery pack is the core system to be balanced, improving efficiency and longevity.

## Circuit Diagram

Schematic of balancer is made on proteus and included in proteus folder.

## Source Code

Source Code for is included in SCR folder.

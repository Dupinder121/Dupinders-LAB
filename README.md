# NETWORKING  

This repository is my personal networking space for documentation on projects, hands-on implementation, and theoretical concepts.  
It is intended only for educational and documentation purposes, not for production environments.  

---

## Purpose
- Build a strong foundation in networking fundamentals  
- Experiment with real-world tools, protocols, and configurations  
- Document personal notes, code snippets, and learning progress  
- Revisit concepts for revision and continuous improvement  

---

## Projects  

### [Project 1: Minimal Web Server on a Virtual Network](./Project1)  
- Setup: VMware VM (minimal Arch Linux + Python)  
- Networking modes covered: Host-only and NAT  
- Web server: Python `http.server` on port 8000  
- Verified access using `ping`, `curl`, and a host web browser  
- Planned extensions: Cisco IOS with GNS3, bridged networking, socket programming in C++, HTTPS exploration, multi-VM networking experiments  

Files:  
- **Project_Intro** → Short overview of setup and ideas  
- **Rough Report** → Detailed procedure with host/guest configs, VM installation notes, and step-by-step documentation  

---

### [Project 2: Extending to Bridged Networking and SSH with GNS3](./Project2)  
- Bridged networking enabled → VM exposed as separate device on LAN  
- Accessed HTTP server on `<guest-ip>:8000`  
- SSH tested (worked on Linux host root account, failed on Windows due to missing OpenSSH setup)  
- Learned about SSH services in Linux (`systemctl ssh.socket`, `sshd.socket`, `openssh`)  
- Explored VM cloning → Linked Clones (VMware/VirtualBox/Cloud VMs like AWS/Azure)  
- Future work: Virtual Cisco 7000 series switch (NX-OS)  

---

## Theoretical Topics Covered So Far
- Virtualization basics with VMware  
- Networking modes: Host-only, NAT, Bridged  
- HTTP fundamentals with Python `http.server`  
- Using `ping`, `curl`, and browsers for testing connectivity  
- SSH setup and troubleshooting  
- VM cloning and linked clones  
- GNS3 integration (early stage)  

---

## Planned Projects
- Implement socket programming in C++  
- Explore HTTPS vs HTTP vulnerabilities  
- Add Cisco IOS/NX-OS device emulation in GNS3  
- Experiment with multi-VM networking (guest-to-guest communication via virtual switches, with host acting only as a bridge)  
- More automation with scripts (bash, Python)  

---

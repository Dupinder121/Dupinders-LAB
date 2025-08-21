# GNS3 on Ubuntu for Network Simulations

## Introduction

This project documents my experience setting up [GNS3](https://www.gns3.com/) on **Ubuntu 22.04 LTS** for network simulations. While the setup was **not fully successful**, this serves as a **log of the process**, including the steps I took, challenges I encountered, and lessons learned. I hope this helps others working on similar setups.

## Objective

The goal of this project was to:

- Install and configure GNS3 on Ubuntu for simulating complex network setups.
- Set up the GNS3 virtual machine (VM) and integrate it with the local server.
- Troubleshoot common installation and configuration issues.

## Environment

- **Operating System**: Ubuntu 22.04 LTS  
- **Tools**:
  - GNS3 (GUI and Server)
  - VMware Workstation Pro  
- **Resources Consulted**:
  - [Official GNS3 Documentation](https://docs.gns3.com/)
  - Various community forums and tutorials

## Steps Taken

### 1. Updating and Preparing the System

```bash
sudo apt update && sudo apt upgrade -y
```

### 2. Installing GNS3

```bash
sudo add-apt-repository ppa:gns3/ppa
sudo apt update
sudo apt install gns3-gui gns3-server
```

### 3. Installing VMware Workstation Pro

Downloaded VMware Workstation Pro for hosting virtual appliances from Broadcom Downloads.

Installed using:

```bash
sudo chmod +x VMware-Workstation-Full-17.6.3-24583834.x86_64.bundle
sudo ./VMware-Workstation-Full-17.6.3-24583834.x86_64.bundle
```

### 4. Installing GNU Compiler Collection (GCC)

VMware requires kernel modules to be compiled, which requires GCC:

```bash
gcc --version  # to check if already installed
sudo apt install gcc
```

### 5. Configuring GNS3

Launched GNS3 GUI:

```bash
gns3
```

Attempted to connect GNS3 to VMware Workstation to run the GNS3 VM.

## Troubleshooting

- **Dependency Conflicts**: Encountered errors due to mismatched or missing dependencies during installation.
- **VM Connectivity Issues**: The GNS3 server had trouble communicating with the GNS3 VM.
- **Server Errors**: Often caused by the GNS3 server and GNS3 VM being on different subnets or misconfigured interfaces.

## Lessons Learned

- Importance of checking compatibility between GNS3 versions, host system, and virtualization tools.
- Improved understanding of Linux-based system troubleshooting, especially with packages and networking.
- Realized that setup needs careful planning and version checking before diving in.

## Next Steps

- Revisit the project from scratch with a more controlled setup.
- Try setting up GNS3 on a Windows host to compare the experience and issues.
- Engage more actively with the GNS3 community and forums to seek feedback and help.

## How You Can Help

If you’ve successfully configured GNS3 on Ubuntu or faced similar challenges:
- Open an issue on this repo with your experience or tips.
- Submit a pull request with corrected or improved steps/configuration.

## Acknowledgments

Special thanks to the GNS3 community and contributors for their extensive documentation and support resources.

> **Note**: This is a work in progress. I intend to go back and document every individual command I used and the exact difficulties I faced — in more detail.

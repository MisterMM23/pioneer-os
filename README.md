# Pi-oneer

This is the repository for the `pi-oneer` project. 

For now, `pi-oneer` is just my hobby OS project and an attempt at implementing from "scratch" the princples of a [multikernel](https://www.sigops.org/s/conferences/sosp/2009/papers/baumann-sosp09.pdf), a fully distributed OS (micro)kernel that relies on message passing rather than shared state for coordination between processses and cores. The goal of such a multikernel is, on the one hand, the traditional microkernel goal of isolating privileged code from useful but not necessarily critical stubs (by pushing them into user code libraries), and on the other hand, to integrate governing architectural principles of distributed computing into OS Design, as pretty much every more performant computer system (from Desktop PCs to HPC Data Centers) is in essence a distributed system, however underlying monolithic kernels don't appear to fundamentally integrate this in their design. 

The project is still in its infancy and should, as it is, not be interpreted as a useful OS. 

## Supported Platform

For now, the only supported platform is the Raspberry Pi 4 B board. It does contains an ARMv8-A CPU, but the PrimeCell UART peripheral address is non-standard, so I wouldn't expect code to run as expected on other ARMv8-A boards. 
